#pragma once
#include "fraction_14awes.h"
namespace GUI123 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		int m = 0;
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;



	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox17;







	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Maroon;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(98, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(32, 46);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L" /";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(33, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(70, 53);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &GUI::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(127, 89);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 53);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GUI::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox5->Location = System::Drawing::Point(330, 89);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(68, 53);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &GUI::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(428, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(69, 53);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &GUI::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Maroon;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(61, 54);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(117, 29);
			this->textBox7->TabIndex = 6;
			this->textBox7->TabStop = false;
			this->textBox7->Text = L"First Fraction";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &GUI::textBox7_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Maroon;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(404, 236);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(131, 91);
			this->textBox10->TabIndex = 10;
			this->textBox10->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(13, 0);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 40);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"+";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(13, 36);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 50);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"-";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(13, 83);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(49, 40);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"/";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(13, 125);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(56, 40);
			this->radioButton4->TabIndex = 14;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"x";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioButton4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(231, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(81, 171);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(33, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 107);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Maroon;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(294, 236);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(80, 91);
			this->textBox11->TabIndex = 10;
			this->textBox11->TabStop = false;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->ForeColor = System::Drawing::Color::Crimson;
			this->textBox12->Location = System::Drawing::Point(309, 340);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(214, 19);
			this->textBox12->TabIndex = 17;
			this->textBox12->TabStop = false;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Location = System::Drawing::Point(259, 340);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(53, 19);
			this->textBox13->TabIndex = 18;
			this->textBox13->TabStop = false;
			this->textBox13->Text = L"Error:";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::Maroon;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox14->Location = System::Drawing::Point(12, 340);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(231, 19);
			this->textBox14->TabIndex = 19;
			this->textBox14->TabStop = false;
			this->textBox14->Text = L"Press ALT+f4 to close calculator";
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &GUI::textBox14_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::Maroon;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->Location = System::Drawing::Point(353, 54);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(128, 29);
			this->textBox15->TabIndex = 20;
			this->textBox15->TabStop = false;
			this->textBox15->Text = L"Second Fraction";
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &GUI::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::Maroon;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::White;
			this->textBox16->Location = System::Drawing::Point(404, 92);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(18, 46);
			this->textBox16->TabIndex = 21;
			this->textBox16->TabStop = false;
			this->textBox16->Text = L"/";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Maroon;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(231, 247);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(35, 68);
			this->textBox8->TabIndex = 22;
			this->textBox8->TabStop = false;
			this->textBox8->Text = L"=";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Maroon;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(357, 202);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(82, 39);
			this->textBox9->TabIndex = 23;
			this->textBox9->TabStop = false;
			this->textBox9->Text = L"Result";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &GUI::textBox9_TextChanged_1);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::Maroon;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::Color::White;
			this->textBox17->Location = System::Drawing::Point(380, 247);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(18, 68);
			this->textBox17->TabIndex = 24;
			this->textBox17->TabStop = false;
			this->textBox17->Text = L"/";
			// 
			// GUI
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(538, 370);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Name = L"GUI";
			this->Text = L"Fraction Calculator by Waleed El-Sayed";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_keyPress(System::Object^  sender, KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
		{
			if (textBox12->Enabled == true)
			{
				
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	m = 1;
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	m = 2;
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	m = 3;
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	m = 4;
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1==""||s2=="")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0|| Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	if (s1 == "" || s2 == "")
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (Int16::Parse(s1) == 0 || Int16::Parse(s2) == 0)
	{
		textBox12->Text = "Denominator cannot be 0";
		button1->Enabled = false;
	}
	else if (m == 0)
	{
		textBox12->Text = "No Operation Selected";
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
		textBox12->Text = "";
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s1 = textBox4->Text;
	String^ s2 = textBox6->Text;
	String^ s3 = textBox3->Text;
	String^ s4 = textBox5->Text;
	if (s3 == "")
	{
		s3 = "0";
	}
	if (s4 == "")
	{
		s4 = "0";
	}
	Fraction F1(Int16::Parse(s3),Int16::Parse(s1));
	Fraction F2(Int16::Parse(s4), Int16::Parse(s2));
	Fraction F3;
	if (m == 1)
	{
		F3 = F1 + F2;
	}
	else if (m == 2)
	{
		F3 = F1 - F2;
	}
	else if (m == 3)
	{
		F3 = F1 / F2;
	}
	else if (m == 4)
	{
		F3 = F1 * F2;
	}
	if (F3.denominator() == 1 || F3.numerator() == 0)
	{
		textBox11->Text = Convert::ToString(F3.numerator());
		textBox10->Text = Convert::ToString("");
	}
	else
	{
		textBox11->Text = Convert::ToString(F3.numerator());
		textBox10->Text = Convert::ToString(F3.denominator());
	}
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
