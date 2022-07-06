#pragma once
#include <iostream>
#include "ftd2xx.h"

namespace oktava2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	FT_HANDLE ftHandle;
	FT_STATUS ftStatus = FT_OK;
	DWORD BytesWritten;
	DWORD BytesReceived;
	int selad = 0;
	int crcerror = 0;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Timer^ adTimer;
	private: System::Windows::Forms::Timer^ parTimer;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;

	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label59;

	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label88;

	private: System::Windows::Forms::Label^ label1;
	public: MyForm(void)
	{
		InitializeComponent();
		//
		//TODO: добавьте код конструктора
		//
		this->comboBox2->SelectedIndex = 11;
		this->DoubleBuffered = true;
		this->adTimer = (gcnew System::Windows::Forms::Timer());
		this->adTimer->Interval = 10000;
		this->adTimer->Tick += gcnew System::EventHandler(this, &MyForm::GetAddresses);
		this->parTimer = (gcnew System::Windows::Forms::Timer());
		this->parTimer->Interval = 3000;
		this->parTimer->Tick += gcnew System::EventHandler(this, &MyForm::GetParams);
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(185, 89);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Связь";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Скорость";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"600", L"1200", L"2400", L"4800", L"9600", L"14400",
					L"19200", L"28800", L"38400", L"56000", L"57600", L"115200", L"128000", L"256000"
			});
			this->comboBox2->Location = System::Drawing::Point(87, 55);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(92, 24);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(87, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton16);
			this->groupBox2->Controls->Add(this->radioButton15);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton10);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(234, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(418, 89);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Адрес Октавы-100";
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Enabled = false;
			this->radioButton16->Location = System::Drawing::Point(357, 56);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(45, 21);
			this->radioButton16->TabIndex = 15;
			this->radioButton16->Text = L"16";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Enabled = false;
			this->radioButton15->Location = System::Drawing::Point(308, 55);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(45, 21);
			this->radioButton15->TabIndex = 14;
			this->radioButton15->Text = L"15";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Enabled = false;
			this->radioButton14->Location = System::Drawing::Point(257, 54);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(45, 21);
			this->radioButton14->TabIndex = 13;
			this->radioButton14->Text = L"14";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Enabled = false;
			this->radioButton13->Location = System::Drawing::Point(207, 56);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(45, 21);
			this->radioButton13->TabIndex = 12;
			this->radioButton13->Text = L"13";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Enabled = false;
			this->radioButton12->Location = System::Drawing::Point(157, 54);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(45, 21);
			this->radioButton12->TabIndex = 11;
			this->radioButton12->Text = L"12";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Enabled = false;
			this->radioButton11->Location = System::Drawing::Point(107, 55);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(45, 21);
			this->radioButton11->TabIndex = 10;
			this->radioButton11->Text = L"11";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Enabled = false;
			this->radioButton10->Location = System::Drawing::Point(57, 55);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(45, 21);
			this->radioButton10->TabIndex = 9;
			this->radioButton10->Text = L"10";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Enabled = false;
			this->radioButton9->Location = System::Drawing::Point(7, 56);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(37, 21);
			this->radioButton9->TabIndex = 8;
			this->radioButton9->Text = L"9";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Enabled = false;
			this->radioButton8->Location = System::Drawing::Point(357, 20);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(37, 21);
			this->radioButton8->TabIndex = 7;
			this->radioButton8->Text = L"8";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Enabled = false;
			this->radioButton7->Location = System::Drawing::Point(307, 21);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(37, 21);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->Text = L"7";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Enabled = false;
			this->radioButton6->Location = System::Drawing::Point(257, 22);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(37, 21);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->Text = L"6";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Enabled = false;
			this->radioButton5->Location = System::Drawing::Point(207, 22);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(37, 21);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Enabled = false;
			this->radioButton4->Location = System::Drawing::Point(157, 22);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(37, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Enabled = false;
			this->radioButton3->Location = System::Drawing::Point(107, 22);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(37, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(57, 22);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(37, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(7, 22);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(37, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radbuttons_changed);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Подключиться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(142, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Нет подключения";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label89);
			this->groupBox3->Controls->Add(this->label88);
			this->groupBox3->Controls->Add(this->label87);
			this->groupBox3->Controls->Add(this->label55);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label85);
			this->groupBox3->Controls->Add(this->label86);
			this->groupBox3->Controls->Add(this->label69);
			this->groupBox3->Controls->Add(this->label68);
			this->groupBox3->Controls->Add(this->label67);
			this->groupBox3->Controls->Add(this->label66);
			this->groupBox3->Controls->Add(this->label65);
			this->groupBox3->Controls->Add(this->label64);
			this->groupBox3->Controls->Add(this->label63);
			this->groupBox3->Controls->Add(this->label62);
			this->groupBox3->Controls->Add(this->label56);
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->label41);
			this->groupBox3->Controls->Add(this->label40);
			this->groupBox3->Controls->Add(this->label39);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->groupBox8);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->groupBox7);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Location = System::Drawing::Point(12, 144);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(891, 499);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(801, 284);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(13, 17);
			this->label89->TabIndex = 56;
			this->label89->Text = L"-";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(801, 354);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(13, 17);
			this->label88->TabIndex = 55;
			this->label88->Text = L"-";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(765, 469);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(13, 17);
			this->label87->TabIndex = 54;
			this->label87->Text = L"-";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(803, 420);
			this->label55->MaximumSize = System::Drawing::Size(82, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(13, 17);
			this->label55->TabIndex = 53;
			this->label55->Text = L"-";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(531, 469);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 17);
			this->label27->TabIndex = 52;
			this->label27->Text = L"-";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::Color::Gray;
			this->label85->Location = System::Drawing::Point(459, 204);
			this->label85->MaximumSize = System::Drawing::Size(15, 15);
			this->label85->MinimumSize = System::Drawing::Size(15, 15);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(15, 15);
			this->label85->TabIndex = 51;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(480, 204);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(79, 17);
			this->label86->TabIndex = 50;
			this->label86->Text = L"Состояние";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Gray;
			this->label69->Location = System::Drawing::Point(244, 469);
			this->label69->MaximumSize = System::Drawing::Size(15, 15);
			this->label69->MinimumSize = System::Drawing::Size(15, 15);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(15, 15);
			this->label69->TabIndex = 49;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Gray;
			this->label68->Location = System::Drawing::Point(244, 386);
			this->label68->MaximumSize = System::Drawing::Size(15, 15);
			this->label68->MinimumSize = System::Drawing::Size(15, 15);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(15, 15);
			this->label68->TabIndex = 48;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Gray;
			this->label67->Location = System::Drawing::Point(246, 297);
			this->label67->MaximumSize = System::Drawing::Size(15, 15);
			this->label67->MinimumSize = System::Drawing::Size(15, 15);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(15, 15);
			this->label67->TabIndex = 47;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Gray;
			this->label66->Location = System::Drawing::Point(246, 213);
			this->label66->MaximumSize = System::Drawing::Size(15, 15);
			this->label66->MinimumSize = System::Drawing::Size(15, 15);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(15, 15);
			this->label66->TabIndex = 46;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(266, 469);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(79, 17);
			this->label65->TabIndex = 45;
			this->label65->Text = L"Состояние";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(267, 297);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(79, 17);
			this->label64->TabIndex = 44;
			this->label64->Text = L"Состояние";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(267, 211);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(79, 17);
			this->label63->TabIndex = 43;
			this->label63->Text = L"Состояние";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(265, 383);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(79, 17);
			this->label62->TabIndex = 42;
			this->label62->Text = L"Состояние";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(421, 63);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(13, 17);
			this->label56->TabIndex = 38;
			this->label56->Text = L"-";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Gray;
			this->label46->Location = System::Drawing::Point(458, 371);
			this->label46->MaximumSize = System::Drawing::Size(15, 15);
			this->label46->MinimumSize = System::Drawing::Size(15, 15);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(15, 15);
			this->label46->TabIndex = 37;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Gray;
			this->label45->Location = System::Drawing::Point(458, 304);
			this->label45->MaximumSize = System::Drawing::Size(15, 15);
			this->label45->MinimumSize = System::Drawing::Size(15, 15);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(15, 15);
			this->label45->TabIndex = 36;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Gray;
			this->label44->Location = System::Drawing::Point(458, 251);
			this->label44->MaximumSize = System::Drawing::Size(15, 15);
			this->label44->MinimumSize = System::Drawing::Size(15, 15);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(15, 15);
			this->label44->TabIndex = 35;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Gray;
			this->label43->Location = System::Drawing::Point(459, 181);
			this->label43->MaximumSize = System::Drawing::Size(15, 15);
			this->label43->MinimumSize = System::Drawing::Size(15, 15);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(15, 15);
			this->label43->TabIndex = 34;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Gray;
			this->label42->Location = System::Drawing::Point(568, 63);
			this->label42->MaximumSize = System::Drawing::Size(15, 15);
			this->label42->MinimumSize = System::Drawing::Size(15, 15);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(15, 15);
			this->label42->TabIndex = 33;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Gray;
			this->label41->Location = System::Drawing::Point(568, 36);
			this->label41->MaximumSize = System::Drawing::Size(15, 15);
			this->label41->MinimumSize = System::Drawing::Size(15, 15);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(15, 15);
			this->label41->TabIndex = 32;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Gray;
			this->label40->Location = System::Drawing::Point(244, 446);
			this->label40->MaximumSize = System::Drawing::Size(15, 15);
			this->label40->MinimumSize = System::Drawing::Size(15, 15);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(15, 15);
			this->label40->TabIndex = 31;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Gray;
			this->label39->Location = System::Drawing::Point(244, 360);
			this->label39->MaximumSize = System::Drawing::Size(15, 15);
			this->label39->MinimumSize = System::Drawing::Size(15, 15);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(15, 15);
			this->label39->TabIndex = 30;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Gray;
			this->label38->Location = System::Drawing::Point(246, 274);
			this->label38->MaximumSize = System::Drawing::Size(15, 15);
			this->label38->MinimumSize = System::Drawing::Size(15, 15);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(15, 15);
			this->label38->TabIndex = 29;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Gray;
			this->label37->Location = System::Drawing::Point(246, 181);
			this->label37->MaximumSize = System::Drawing::Size(15, 15);
			this->label37->MinimumSize = System::Drawing::Size(15, 15);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(15, 15);
			this->label37->TabIndex = 28;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Gray;
			this->label36->Location = System::Drawing::Point(23, 63);
			this->label36->MaximumSize = System::Drawing::Size(15, 15);
			this->label36->MinimumSize = System::Drawing::Size(15, 15);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(15, 15);
			this->label36->TabIndex = 27;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Gray;
			this->label35->Location = System::Drawing::Point(334, 38);
			this->label35->MaximumSize = System::Drawing::Size(15, 15);
			this->label35->MinimumSize = System::Drawing::Size(15, 15);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 15);
			this->label35->TabIndex = 26;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Gray;
			this->label34->Location = System::Drawing::Point(22, 36);
			this->label34->MaximumSize = System::Drawing::Size(15, 15);
			this->label34->MinimumSize = System::Drawing::Size(15, 15);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(15, 15);
			this->label34->TabIndex = 25;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(458, 435);
			this->label33->MaximumSize = System::Drawing::Size(200, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(191, 51);
			this->label33->TabIndex = 24;
			this->label33->Text = L"Номера зон, активируемых при включении режима «Пожар»:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(670, 386);
			this->label32->MaximumSize = System::Drawing::Size(200, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(158, 51);
			this->label32->TabIndex = 23;
			this->label32->Text = L"Тип воспроизводимых сообщений в режимах «пожар» и «пуск»:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(670, 452);
			this->label31->MaximumSize = System::Drawing::Size(150, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(134, 34);
			this->label31->TabIndex = 22;
			this->label31->Text = L"Количество линий интерфейса:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(670, 320);
			this->label30->MaximumSize = System::Drawing::Size(200, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(187, 51);
			this->label30->TabIndex = 21;
			this->label30->Text = L"Задержка между трансляцией сообщений в режиме «Пожар»:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(670, 251);
			this->label29->MaximumSize = System::Drawing::Size(200, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(182, 51);
			this->label29->TabIndex = 20;
			this->label29->Text = L"Задержка перед началом трансляции сообщений в режиме «Пожар»:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(587, 63);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(182, 17);
			this->label28->TabIndex = 19;
			this->label28->Text = L"Неисправность усилителя";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label54);
			this->groupBox8->Controls->Add(this->label53);
			this->groupBox8->Controls->Add(this->label52);
			this->groupBox8->Controls->Add(this->label51);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Location = System::Drawing::Point(664, 90);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(201, 149);
			this->groupBox8->TabIndex = 18;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Трансляция сообщений";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Gray;
			this->label54->Location = System::Drawing::Point(6, 91);
			this->label54->MaximumSize = System::Drawing::Size(15, 15);
			this->label54->MinimumSize = System::Drawing::Size(15, 15);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(15, 15);
			this->label54->TabIndex = 40;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::Gray;
			this->label53->Location = System::Drawing::Point(6, 63);
			this->label53->MaximumSize = System::Drawing::Size(15, 15);
			this->label53->MinimumSize = System::Drawing::Size(15, 15);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(15, 15);
			this->label53->TabIndex = 39;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Gray;
			this->label52->Location = System::Drawing::Point(6, 123);
			this->label52->MaximumSize = System::Drawing::Size(15, 15);
			this->label52->MinimumSize = System::Drawing::Size(15, 15);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(15, 15);
			this->label52->TabIndex = 39;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Gray;
			this->label51->Location = System::Drawing::Point(6, 31);
			this->label51->MaximumSize = System::Drawing::Size(15, 15);
			this->label51->MinimumSize = System::Drawing::Size(15, 15);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(15, 15);
			this->label51->TabIndex = 38;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(24, 121);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(120, 17);
			this->label26->TabIndex = 19;
			this->label26->Text = L"Тестовое сообщ.";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(24, 91);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(136, 17);
			this->label25->TabIndex = 18;
			this->label25->Text = L"Сообщ. \"Внимание\"";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(24, 29);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(68, 17);
			this->label23->TabIndex = 16;
			this->label23->Text = L"Сообщ. 1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(24, 61);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(68, 17);
			this->label24->TabIndex = 17;
			this->label24->Text = L"Сообщ. 2";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(480, 181);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(125, 17);
			this->label22->TabIndex = 15;
			this->label22->Text = L"Реле \"Активация\"";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(479, 304);
			this->label21->MaximumSize = System::Drawing::Size(181, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(150, 34);
			this->label21->TabIndex = 14;
			this->label21->Text = L"Аудиотрансляция по линейному входу";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(479, 371);
			this->label20->MaximumSize = System::Drawing::Size(181, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(158, 34);
			this->label20->TabIndex = 13;
			this->label20->Text = L"Отключение звуковой сигнализации";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(479, 251);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(181, 17);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Режим \"Автоматика откл.\"";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(587, 34);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(187, 17);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Неисправность устройства";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(266, 446);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 17);
			this->label17->TabIndex = 10;
			this->label17->Text = L"ППКП2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(265, 360);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 17);
			this->label16->TabIndex = 9;
			this->label16->Text = L"ППКП1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(267, 274);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 17);
			this->label15->TabIndex = 8;
			this->label15->Text = L"К5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(267, 179);
			this->label14->MaximumSize = System::Drawing::Size(180, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(171, 17);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Внешняя неисправность";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(43, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(205, 17);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Линия светового оповещения";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(334, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 17);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Тип октавы:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(43, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 17);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Сеть 220В";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(354, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 17);
			this->label10->TabIndex = 3;
			this->label10->Text = L"АКБ";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label83);
			this->groupBox7->Controls->Add(this->label84);
			this->groupBox7->Controls->Add(this->label81);
			this->groupBox7->Controls->Add(this->label82);
			this->groupBox7->Location = System::Drawing::Point(452, 90);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(194, 78);
			this->groupBox7->TabIndex = 2;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"ВПУ";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(27, 47);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(88, 17);
			this->label83->TabIndex = 44;
			this->label83->Text = L"Трансляция";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::Gray;
			this->label84->Location = System::Drawing::Point(6, 47);
			this->label84->MaximumSize = System::Drawing::Size(15, 15);
			this->label84->MinimumSize = System::Drawing::Size(15, 15);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(15, 15);
			this->label84->TabIndex = 45;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(27, 24);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(93, 17);
			this->label81->TabIndex = 42;
			this->label81->Text = L"Исправность";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::Gray;
			this->label82->Location = System::Drawing::Point(6, 24);
			this->label82->MaximumSize = System::Drawing::Size(15, 15);
			this->label82->MinimumSize = System::Drawing::Size(15, 15);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(15, 15);
			this->label82->TabIndex = 43;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label60);
			this->groupBox6->Controls->Add(this->label59);
			this->groupBox6->Controls->Add(this->label58);
			this->groupBox6->Controls->Add(this->label57);
			this->groupBox6->Location = System::Drawing::Point(240, 90);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(194, 78);
			this->groupBox6->TabIndex = 1;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"ВМ-03";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(27, 47);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(79, 17);
			this->label60->TabIndex = 41;
			this->label60->Text = L"Состояние";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::Gray;
			this->label59->Location = System::Drawing::Point(6, 47);
			this->label59->MaximumSize = System::Drawing::Size(15, 15);
			this->label59->MinimumSize = System::Drawing::Size(15, 15);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(15, 15);
			this->label59->TabIndex = 40;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(27, 24);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(93, 17);
			this->label58->TabIndex = 39;
			this->label58->Text = L"Исправность";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::Gray;
			this->label57->Location = System::Drawing::Point(6, 24);
			this->label57->MaximumSize = System::Drawing::Size(15, 15);
			this->label57->MinimumSize = System::Drawing::Size(15, 15);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(15, 15);
			this->label57->TabIndex = 39;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label80);
			this->groupBox5->Controls->Add(this->label79);
			this->groupBox5->Controls->Add(this->label78);
			this->groupBox5->Controls->Add(this->label77);
			this->groupBox5->Controls->Add(this->label75);
			this->groupBox5->Controls->Add(this->label76);
			this->groupBox5->Controls->Add(this->label73);
			this->groupBox5->Controls->Add(this->label74);
			this->groupBox5->Controls->Add(this->label71);
			this->groupBox5->Controls->Add(this->label72);
			this->groupBox5->Controls->Add(this->label61);
			this->groupBox5->Controls->Add(this->label70);
			this->groupBox5->Controls->Add(this->label50);
			this->groupBox5->Controls->Add(this->label49);
			this->groupBox5->Controls->Add(this->label48);
			this->groupBox5->Controls->Add(this->label47);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Location = System::Drawing::Point(19, 90);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 396);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Звуковые линии";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(24, 73);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(76, 17);
			this->label80->TabIndex = 53;
			this->label80->Text = L"Нагрузка: ";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(21, 173);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(76, 17);
			this->label79->TabIndex = 52;
			this->label79->Text = L"Нагрузка: ";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(21, 272);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(76, 17);
			this->label78->TabIndex = 51;
			this->label78->Text = L"Нагрузка: ";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(24, 373);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(76, 17);
			this->label77->TabIndex = 50;
			this->label77->Text = L"Нагрузка: ";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Gray;
			this->label75->Location = System::Drawing::Point(3, 350);
			this->label75->MaximumSize = System::Drawing::Size(15, 15);
			this->label75->MinimumSize = System::Drawing::Size(15, 15);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(15, 15);
			this->label75->TabIndex = 49;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(21, 350);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(78, 17);
			this->label76->TabIndex = 48;
			this->label76->Text = L"Активация";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Gray;
			this->label73->Location = System::Drawing::Point(4, 249);
			this->label73->MaximumSize = System::Drawing::Size(15, 15);
			this->label73->MinimumSize = System::Drawing::Size(15, 15);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(15, 15);
			this->label73->TabIndex = 47;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(21, 249);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(78, 17);
			this->label74->TabIndex = 46;
			this->label74->Text = L"Активация";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Gray;
			this->label71->Location = System::Drawing::Point(4, 150);
			this->label71->MaximumSize = System::Drawing::Size(15, 15);
			this->label71->MinimumSize = System::Drawing::Size(15, 15);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(15, 15);
			this->label71->TabIndex = 45;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(21, 150);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(78, 17);
			this->label72->TabIndex = 44;
			this->label72->Text = L"Активация";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Gray;
			this->label61->Location = System::Drawing::Point(6, 50);
			this->label61->MaximumSize = System::Drawing::Size(15, 15);
			this->label61->MinimumSize = System::Drawing::Size(15, 15);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(15, 15);
			this->label61->TabIndex = 43;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(24, 50);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(78, 17);
			this->label70->TabIndex = 42;
			this->label70->Text = L"Активация";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Gray;
			this->label50->Location = System::Drawing::Point(3, 329);
			this->label50->MaximumSize = System::Drawing::Size(15, 15);
			this->label50->MinimumSize = System::Drawing::Size(15, 15);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(15, 15);
			this->label50->TabIndex = 41;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Gray;
			this->label49->Location = System::Drawing::Point(4, 226);
			this->label49->MaximumSize = System::Drawing::Size(15, 15);
			this->label49->MinimumSize = System::Drawing::Size(15, 15);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(15, 15);
			this->label49->TabIndex = 40;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Gray;
			this->label48->Location = System::Drawing::Point(4, 127);
			this->label48->MaximumSize = System::Drawing::Size(15, 15);
			this->label48->MinimumSize = System::Drawing::Size(15, 15);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(15, 15);
			this->label48->TabIndex = 39;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Gray;
			this->label47->Location = System::Drawing::Point(6, 29);
			this->label47->MaximumSize = System::Drawing::Size(15, 15);
			this->label47->MinimumSize = System::Drawing::Size(15, 15);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(15, 15);
			this->label47->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 329);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Линия 4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 17);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Линия 3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Линия 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Линия 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label5->Location = System::Drawing::Point(13, 646);
			this->label5->MinimumSize = System::Drawing::Size(891, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(891, 17);
			this->label5->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 668);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Oktava";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillComboBox();
		if(this->comboBox1->Items->Count!=0) this->comboBox1->SelectedIndex = 0;
		/*this->groupBox2->Enabled = true;
		UpdateRad();*///проверка без подключения
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FT_Close(ftHandle);
		ULONG baudrate = 0;
		ULONG LocID = 0;
		try {
			baudrate = Convert::ToUInt32(this->comboBox2->Text);
			LocID = Convert::ToUInt32(this->comboBox1->Text);
		}
		catch (...) {
			NoConnection();
			baudrate = 0;
			LocID = 0;
		}
		if (baudrate != 0 && LocID != 0) {
			ftStatus = FT_OpenEx(PVOID(LocID), FT_OPEN_BY_LOCATION, &ftHandle);
			ftStatus |= FT_SetBaudRate(ftHandle, baudrate);
			ftStatus |= FT_SetDataCharacteristics(ftHandle, FT_BITS_8, FT_STOP_BITS_1, FT_PARITY_NONE);
			if (ftStatus == FT_OK) {
				this->label1->Text = "Подключено";
				radsoff();
				ParamsOff();
				this->parTimer->Enabled = false;
				this->adTimer->Enabled = true;
				this->groupBox2->Enabled = true;
				UpdateRad();
			}
			else {
				NoConnection();
			}
		}
	}
		   void NoConnection() {
			   ftStatus = FT_Close(ftHandle);
			   this->label1->Text = "Не подключено";
			   this->adTimer->Enabled = false;
			   this->parTimer->Enabled = false;
			   this->groupBox2->Enabled = false;
			   radsoff();
			   ParamsOff();
		   }
		   void SendData(unsigned char data[],int len) {
			   ftStatus = FT_Write(ftHandle, data, len, &BytesWritten);
			   if (ftStatus == FT_OK) {
				   String^ st = "";
				   for (int i = 0; i < len; i++) {
					   st = st + "0x" + data[i].ToString("x") + " ";
				   }
				   this->label5->Text = st;
			   }
			   else this->label5->Text = "Ошибка: Запрос не отправлен";
		   }
		   void UpdateRad() {
			   unsigned char req[] = { 0x05,0x01 };
			   unsigned short c = crc16(req, sizeof(req));
			   unsigned char reqcrc[] = { 0x05,0x01,crc1(c),crc2(c) };
			   SendData(reqcrc, sizeof(reqcrc));
			   unsigned char ans[6];
			   ftStatus = FT_Read(ftHandle, ans, sizeof(ans), &BytesReceived);
			   /*ftStatus == FT_OK;
			   unsigned char an[] = { 0x05,0x02,0x00,0x07 };
			   unsigned short c = crc16(an, sizeof(an));
			   unsigned char ans[] = { 0x05,0x02,0x00,0x07,crc1(c),crc2(c) };*///тестовые данные
			   if (ftStatus == FT_OK) {
				   String^ st = "";
				   for (int i = 0; i < sizeof(ans); i++) {
					   st = st + "0x" + ans[i].ToString("x") + " ";
				   }
				   this->label5->Text = st;
				   List<int>^ l = gcnew List<int>();
					l = GetAdList(ans);
				   if (l->IndexOf(-1) != -1) {
					   crcerror++;
					   if (crcerror == 5) {
						   crcerror = 0;
						   NoConnection();
						   MessageBox::Show("Ошибка CRC", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   }
					   else UpdateRad();
				   }
				   else {
					   crcerror = 0;
					   if (l->Count != 0) {
						   if (l->IndexOf(1) != -1) this->radioButton1->Enabled = true;
						   if (l->IndexOf(2) != -1) this->radioButton2->Enabled = true;
						   if (l->IndexOf(3) != -1) this->radioButton3->Enabled = true;
						   if (l->IndexOf(4) != -1) this->radioButton4->Enabled = true;
						   if (l->IndexOf(5) != -1) this->radioButton5->Enabled = true;
						   if (l->IndexOf(6) != -1) this->radioButton6->Enabled = true;
						   if (l->IndexOf(7) != -1) this->radioButton7->Enabled = true;
						   if (l->IndexOf(8) != -1) this->radioButton8->Enabled = true;
						   if (l->IndexOf(9) != -1) this->radioButton9->Enabled = true;
						   if (l->IndexOf(10) != -1) this->radioButton10->Enabled = true;
						   if (l->IndexOf(11) != -1) this->radioButton11->Enabled = true;
						   if (l->IndexOf(12) != -1) this->radioButton12->Enabled = true;
						   if (l->IndexOf(13) != -1) this->radioButton13->Enabled = true;
						   if (l->IndexOf(14) != -1) this->radioButton14->Enabled = true;
						   if (l->IndexOf(15) != -1) this->radioButton15->Enabled = true;
						   if (l->IndexOf(16) != -1) this->radioButton16->Enabled = true;
					   }
				   }
			   }
			   else this->label5->Text = "Ошибка: Ответ системы не получен";
		   }
		   private: List<int>^ GetAdList(unsigned char data[]) {
			   unsigned char ans[] = { data[0],data[1],data[2],data[3] };
			   unsigned short c = crc16(ans, sizeof(ans));
			   List<int>^ l = gcnew List<int>();
			   if (crc1(c) == data[4] && crc2(c) == data[5]) {
				   byte ad1 = data[2];
				   byte ad2 = data[3];
				   for (int i = 0; i < 8; i++) {
					   if (ad1 % 2 == 1) l->Add(9 + i);
					   ad1 = ad1 / 2;
					   if (ad2 % 2 == 1) l->Add(1 + i);
					   ad2 = ad2 / 2;
				   }
			   }
			   else l->Add(-1);
				   return l;
		   }
		   unsigned char crc2(unsigned short c) {
			   return c;
		   }
		   unsigned char crc1(unsigned short c) {
			   return c >> 8;
		   }

		   unsigned short crc16(unsigned char* buf, int len)
		   {
			   unsigned short crc = 0xFFFF;
			   for (int pos = 0; pos < len; pos++)
			   {
				   crc ^= (unsigned short)buf[pos];

				   for (int i = 8; i != 0; i--) {
					   if ((crc & 0x0001) != 0) {
						   crc >>= 1;
						   crc ^= 0xA001;
					   }
					   else
						   crc >>= 1;
				   }
			   }

			   return crc;
		   }

		   void radsoff() {
			   this->radioButton1->Checked = false;
			   this->radioButton2->Checked = false;
			   this->radioButton3->Checked = false;
			   this->radioButton4->Checked = false;
			   this->radioButton5->Checked = false;
			   this->radioButton6->Checked = false;
			   this->radioButton7->Checked = false;
			   this->radioButton8->Checked = false;
			   this->radioButton9->Checked = false;
			   this->radioButton10->Checked = false;
			   this->radioButton11->Checked = false;
			   this->radioButton12->Checked = false;
			   this->radioButton13->Checked = false;
			   this->radioButton14->Checked = false;
			   this->radioButton15->Checked = false;
			   this->radioButton16->Checked = false;
		   }
	private: System::Void GetAddresses(System::Object^ sender, System::EventArgs^ e) {
		UpdateRad();
	}
	private: System::Void GetParams(System::Object^ sender, System::EventArgs^ e) {
		GetParamsOfAd(selad);
	}
		   void GetParamsOfAd(char a) {
			   unsigned char req[] = { a,0x01,0x01 };
			   unsigned short c = crc16(req, sizeof(req));
			   unsigned char reqcrc[] = { a,0x01,0x01,crc1(c),crc2(c) };
			   SendData(reqcrc, sizeof(reqcrc));
			   unsigned char ans[17];
			   ftStatus = FT_Read(ftHandle, ans, sizeof(ans), &BytesReceived);
			   /*ftStatus = FT_OK;
			   unsigned char an[] = { 0x05, 0x02, 0xF7, 0x00, 0x20, 0x0C, 0x20, 0xFF, 0x00, 0x50, 0x12, 0x00, 0x55, 0x00, 0x34 };
			   unsigned short c = crc16(an, sizeof(an));
			   unsigned char ans[] = { 0x05, 0x02, 0xF7, 0x00, 0x20, 0x0C, 0x20, 0xFF, 0x00, 0x50, 0x12, 0x00, 0x55, 0x00, 0x34,crc1(c),crc2(c) };*///тестовые данные
			   if (ftStatus == FT_OK) {
				   String^ st = "";
				   for (int i = 0; i < sizeof(ans); i++) {
					   st = st + "0x" + ans[i].ToString("x") + " ";
				   }
				   this->label5->Text = st;
				   unsigned char ac[15];
				   for (int i = 0; i < 15; i++) ac[i] = ans[i];
				   unsigned short acrc = crc16(ac, sizeof(ac));
				   if (crc1(acrc) == ans[15] && crc2(acrc) == ans[16]) {
					   crcerror = 0;
					   byte b = ans[2];
					   if (b % 2 == 1) this->label36->BackColor = Color::Green;
					   else this->label36->BackColor = Color::Red;
					   b /= 2;
					   if (b % 2 == 1) this->label56->Text = "Октава 80Ц-М";
					   else this->label56->Text = "Октава 100Ц-М";
					   byte type = b % 2;
					   b /= 2;
					   if (type == 1) {
						   if (b % 2 == 1)this->label50->BackColor = Color::Green;
						   else this->label50->BackColor = Color::Red;
						   b /= 2;
						   if (b % 2 == 1)this->label49->BackColor = Color::Green;
						   else this->label49->BackColor = Color::Red;
						   b /= 2;
						   if (b % 2 == 1)this->label48->BackColor = Color::Green;
						   else this->label48->BackColor = Color::Red;
						   b /= 2;
					   }
					   else b /= 8;
					   if (b % 2 == 1)this->label47->BackColor = Color::Green;
					   else this->label47->BackColor = Color::Red;
					   b /= 2;
					   if (b % 2 == 1)this->label35->BackColor = Color::Green;
					   else this->label35->BackColor = Color::Red;
					   b /= 2;
					   if (b % 2 == 1)this->label34->BackColor = Color::Green;
					   else this->label34->BackColor = Color::Red;
					   b = ans[3];
					   if (b % 2 == 0 && (b / 2) % 2 == 0) {
						   this->label39->BackColor = Color::Green;
						   this->label16->Text = "ППКП1";
					   }
					   else if (b % 2 == 1 && (b / 2) % 2 == 0) {
						   this->label39->BackColor = Color::Red;
						   this->label16->Text = "ППКП1 (Короткое замыкание)";
					   }
					   else if (b % 2 == 0 && (b / 2) % 2 == 1) {
						   this->label39->BackColor = Color::Red;
						   this->label16->Text = "ППКП1 (Обрыв шлейфа)";
					   }
					   b = b / 4;
					   if (b % 2 == 0 && (b / 2) % 2 == 0) {
						   this->label38->BackColor = Color::Green;
						   this->label15->Text = "К5";
					   }
					   else if (b % 2 == 1 && (b / 2) % 2 == 0) {
						   this->label38->BackColor = Color::Red;
						   this->label15->Text = "К5 (Короткое замыкание)";
					   }
					   else if (b % 2 == 0 && (b / 2) % 2 == 1) {
						   this->label38->BackColor = Color::Red;
						   this->label15->Text = "К5 (Обрыв шлейфа)";
					   }
					   b = b / 4;
					   if (b % 2 == 0 && (b / 2) % 2 == 0) {
						   this->label37->BackColor = Color::Green;
						   this->label14->Text = "Внешняя неисправность";
					   }
					   else if (b % 2 == 1 && (b / 2) % 2 == 0) {
						   this->label37->BackColor = Color::Red;
						   this->label14->Text = "Внешняя неисправность (Короткое замыкание)";
					   }
					   else if (b % 2 == 0 && (b / 2) % 2 == 1) {
						   this->label37->BackColor = Color::Red;
						   this->label14->Text = "Внешняя неисправность (Обрыв шлейфа)";
					   }
					   b = b / 4;
					   if (b % 2 == 0 && (b / 2) % 2 == 0) {
						   this->label57->BackColor = Color::Green;
						   this->label58->Text = "Исправно";
					   }
					   else if (b % 2 == 1 && (b / 2) % 2 == 0) {
						   this->label57->BackColor = Color::Red;
						   this->label58->Text = "Короткое замыкание";
					   }
					   else if (b % 2 == 0 && (b / 2) % 2 == 1) {
						   this->label57->BackColor = Color::Red;
						   this->label58->Text = "Обрыв шлейфа";
					   }
					   b = ans[4];
					   if (b % 2 == 1) {
						   this->label67->BackColor = Color::Yellow;
						   this->label64->Text = "Активирован";
					   }
					   else {
						   this->label67->BackColor = Color::Gray;
						   this->label64->Text = "Не активирован";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label59->BackColor = Color::Yellow;
						   this->label60->Text = "Включен";
					   }
					   else {
						   this->label59->BackColor = Color::Gray;
						   this->label60->Text = "Выключен";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label69->BackColor = Color::Yellow;
						   this->label65->Text = "Пожар 2";
					   }
					   else {
						   this->label69->BackColor = Color::Gray;
						   this->label65->Text = "Дежурный режим";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label68->BackColor = Color::Yellow;
						   this->label62->Text = "Пожар 1";
					   }
					   else {
						   this->label68->BackColor = Color::Gray;
						   this->label62->Text = "Дежурный режим";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label66->BackColor = Color::Yellow;
						   this->label63->Text = "Неисправность";
					   }
					   else {
						   this->label66->BackColor = Color::Gray;
						   this->label63->Text = "Дежурный режим";
					   }
					   b /= 2;
					   if (b % 2 == 0)this->label41->BackColor = Color::Green;
					   else this->label41->BackColor = Color::Red;
					   b /= 2;
					   if (b % 2 == 0 && (b / 2) % 2 == 0) {
						   this->label40->BackColor = Color::Green;
						   this->label17->Text = "ППКП2";
					   }
					   else if (b % 2 == 1 && (b / 2) % 2 == 0) {
						   this->label40->BackColor = Color::Red;
						   this->label17->Text = "ППКП2 (Короткое замыкание)";
					   }
					   else if (b % 2 == 0 && (b / 2) % 2 == 1) {
						   this->label40->BackColor = Color::Red;
						   this->label17->Text = "ППКП2 (Обрыв шлейфа)";
					   }
					   b = ans[5] / 2;
					   if (type == 1) {
						   if (b % 2 == 1) {
							   this->label75->BackColor = Color::Yellow;
							   this->label76->Text = "Активирована";
						   }
						   else {
							   this->label75->BackColor = Color::Gray;
							   this->label76->Text = "Отключена";
						   }
						   b /= 2;
						   if (b % 2 == 1) {
							   this->label73->BackColor = Color::Yellow;
							   this->label74->Text = "Активирована";
						   }
						   else {
							   this->label73->BackColor = Color::Gray;
							   this->label74->Text = "Отключена";
						   }
						   b /= 2;
						   if (b % 2 == 1) {
							   this->label71->BackColor = Color::Yellow;
							   this->label72->Text = "Активирована";
						   }
						   else {
							   this->label71->BackColor = Color::Gray;
							   this->label72->Text = "Отключена";
						   }
						   b /= 2;
						   if (b % 2 == 1) {
							   this->label61->BackColor = Color::Yellow;
							   this->label70->Text = "Активирована";
						   }
						   else {
							   this->label61->BackColor = Color::Gray;
							   this->label70->Text = "Отключена";
						   }
						   b /= 2;
					   }
					   else {
						   b /= 16;
						   this->label61->BackColor = Color::Yellow;
						   this->label70->Text = "Активирована";
					   }
					   if (b % 2 == 1) {
						   this->label45->BackColor = Color::Yellow;
					   }
					   else {
						   this->label45->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label46->BackColor = Color::Yellow;
					   }
					   else {
						   this->label46->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label44->BackColor = Color::Yellow;
					   }
					   else {
						   this->label44->BackColor = Color::Gray;
					   }
					   b = ans[6];
					   if (b % 2 == 1) {
						   this->label84->BackColor = Color::Yellow;
					   }
					   else {
						   this->label84->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label52->BackColor = Color::Yellow;
					   }
					   else {
						   this->label52->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label54->BackColor = Color::Yellow;
					   }
					   else {
						   this->label54->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label53->BackColor = Color::Yellow;
					   }
					   else {
						   this->label53->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label51->BackColor = Color::Yellow;
					   }
					   else {
						   this->label51->BackColor = Color::Gray;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label82->BackColor = Color::Green;
					   }
					   else {
						   this->label82->BackColor = Color::Red;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label43->BackColor = Color::Green;
					   }
					   else {
						   this->label43->BackColor = Color::Red;
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label85->BackColor = Color::Yellow;
						   this->label86->Text = "Активировано";
					   }
					   else {
						   this->label85->BackColor = Color::Gray;
						   this->label86->Text = "Не активировано";
					   }
					   b = ans[6];
					   byte l;
					   if (type == 1) l = b % 16;
					   else l = b % 4;
					   switch (l) {
					   case 0:
						   this->label27->Text = "Нет";
						   break;
					   case 1:
						   this->label27->Text = "Линия 1";
						   break;
					   case 2:
						   this->label27->Text = "Линия 2";
						   break;
					   case 3:
						   this->label27->Text = "Линии 1,2";
						   break;
					   case 4:
						   this->label27->Text = "Линии 3";
						   break;
					   case 5:
						   this->label27->Text = "Линии 3,1";
						   break;
					   case 6:
						   this->label27->Text = "Линии 3,2";
						   break;
					   case 7:
						   this->label27->Text = "Линии 3,2,1";
						   break;
					   case 8:
						   this->label27->Text = "Линии 4";
						   break;
					   case 9:
						   this->label27->Text = "Линии 4,1";
						   break;
					   case 10:
						   this->label27->Text = "Линии 4,2";
						   break;
					   case 11:
						   this->label27->Text = "Линии 4,2,1";
						   break;
					   case 12:
						   this->label27->Text = "Линии 4,3";
						   break;
					   case 13:
						   this->label27->Text = "Линии 4,3,1";
						   break;
					   case 14:
						   this->label27->Text = "Линии 4,3,2";
						   break;
					   case 15:
						   this->label27->Text = "Линии 4,3,2,1";
						   break;
					   }
					   b /= 16;
					   if (b % 2 == 1) {
						   this->label55->Text = "Пользовательские";
					   }
					   else {
						   this->label55->Text = "Заводские";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label87->Text = "2";
					   }
					   else {
						   this->label87->Text = "1";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label88->Text = "5 с";
					   }
					   else {
						   this->label88->Text = "30 с";
					   }
					   b /= 2;
					   if (b % 2 == 1) {
						   this->label89->Text = "5 с";
					   }
					   else {
						   this->label89->Text = "30 с";
					   }
					   b = ans[7] / 128;
					   if (b % 2 == 1) {
						   this->label42->BackColor = Color::Green;
					   }
					   else {
						   this->label42->BackColor = Color::Red;
					   }
					   this->label80->Text = "Нагрузка: " + ans[8] + " Вт";
					   if (type == 1) {
						   this->label79->Text = "Нагрузка: " + ans[9] + " Вт";
						   this->label78->Text = "Нагрузка: " + ans[10] + " Вт";
						   this->label77->Text = "Нагрузка: " + ans[11] + " Вт";
					   }
					   this->label10->Text = "АКБ " + (ans[12] * 10 - 50) + " В";
				   }
				   else {
					   crcerror++;
					   if (crcerror == 5) {
						   crcerror = 0;
						   radsoff();
						   this->parTimer->Enabled = false;
						   MessageBox::Show("Ошибка CRC", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   }
					   else GetParamsOfAd(a);
				   }
			   }
			   else this->label5->Text = "Ошибка: Ответ системы не получен";
		   }
		   void ParamsOff() {
			   this->label34->BackColor = Color::Gray;
			   this->label35->BackColor = Color::Gray;
			   this->label36->BackColor = Color::Gray;
			   this->label47->BackColor = Color::Gray;
			   this->label48->BackColor = Color::Gray;
			   this->label49->BackColor = Color::Gray;
			   this->label50->BackColor = Color::Gray;
			   this->label56->Text = "-";

			   this->label39->BackColor = Color::Gray;
			   this->label38->BackColor = Color::Gray;
			   this->label37->BackColor = Color::Gray;
			   this->label57->BackColor = Color::Gray;
			   this->label16->Text = "ППКП1";
			   this->label15->Text = "К5";
			   this->label14->Text = "Внешняя неисправность";
			   this->label58->Text = "Исправность";


			   this->label67->BackColor = Color::Gray;
			   this->label59->BackColor = Color::Gray;
			   this->label69->BackColor = Color::Gray;
			   this->label68->BackColor = Color::Gray;
			   this->label66->BackColor = Color::Gray;
			   this->label41->BackColor = Color::Gray;
			   this->label40->BackColor = Color::Gray;
			   this->label64->Text = "Состояние";
			   this->label60->Text = "Состояние";
			   this->label65->Text = "Состояние";
			   this->label62->Text = "Состояние";
			   this->label63->Text = "Состояние";
			   this->label17->Text = "ППКП2";

			   this->label75->BackColor = Color::Gray;
			   this->label71->BackColor = Color::Gray;
			   this->label73->BackColor = Color::Gray;
			   this->label61->BackColor = Color::Gray;
			   this->label45->BackColor = Color::Gray;
			   this->label46->BackColor = Color::Gray;
			   this->label44->BackColor = Color::Gray;
			   this->label76->Text = "Активация";
			   this->label74->Text = "Активация";
			   this->label72->Text = "Активация";
			   this->label70->Text = "Активация";

			   this->label84->BackColor = Color::Gray;
			   this->label52->BackColor = Color::Gray;
			   this->label53->BackColor = Color::Gray;
			   this->label54->BackColor = Color::Gray;
			   this->label51->BackColor = Color::Gray;
			   this->label82->BackColor = Color::Gray;
			   this->label43->BackColor = Color::Gray;
			   this->label85->BackColor = Color::Gray;
			   this->label86->Text = "Состояние";

			   this->label27->Text = "-";
			   this->label55->Text = "-";
			   this->label87->Text = "-";
			   this->label88->Text = "-";
			   this->label89->Text = "-";

			   this->label42->BackColor = Color::Gray;
			   this->label80->Text = "Нагрузка: ";
			   this->label79->Text = "Нагрузка: ";
			   this->label78->Text = "Нагрузка: ";
			   this->label77->Text = "Нагрузка: ";
			   this->label10->Text = "АКБ";
		   }
		   private: System::Void FillComboBox()
		   {
			   int locIdBuf[16];
			   DWORD numDevs;
			   ftStatus = FT_ListDevices(locIdBuf, &numDevs, FT_LIST_ALL | FT_OPEN_BY_LOCATION);
			   if (ftStatus == FT_OK) {
				   for (int i = 0; i < numDevs; i++) {
						this->comboBox1->Items->Add(locIdBuf[i]);
					}
			   }
		   }

	   private: System::Void radbuttons_changed(System::Object^ sender, System::EventArgs^ e) {
		   selad = 0;
		   if (this->radioButton1->Checked) selad = 1;
		   else if (this->radioButton2->Checked) selad = 2;
		   else if (this->radioButton3->Checked) selad = 3;
		   else if (this->radioButton4->Checked) selad = 4;
		   else if (this->radioButton5->Checked) selad = 5;
		   else if (this->radioButton6->Checked) selad = 6;
		   else if (this->radioButton7->Checked) selad = 7;
		   else if (this->radioButton8->Checked) selad = 8;
		   else if (this->radioButton9->Checked) selad = 9;
		   else if (this->radioButton10->Checked) selad = 10;
		   else if (this->radioButton11->Checked) selad = 11;
		   else if (this->radioButton12->Checked) selad = 12;
		   else if (this->radioButton13->Checked) selad = 13;
		   else if (this->radioButton14->Checked) selad = 14;
		   else if (this->radioButton15->Checked) selad = 15;
		   else if (this->radioButton16->Checked) selad = 16;
		   if (selad != 0) {
			   this->parTimer->Enabled = false;
			   this->parTimer->Enabled = true;
			   GetParamsOfAd(selad);
		   }
	   }
};
}
