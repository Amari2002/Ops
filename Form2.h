#pragma once
#ifndef FORM2_H
#define FORM2_H

#include "SJF.h"
#include "SRTF.h"
#include "NPP.h"
namespace Ops {
	
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Algorithm
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form^ Form2View;
	public:
		Form^ form;
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form2(Form^ Form2ViewParam) {
			Form2View = Form2ViewParam;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;



	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->Location = System::Drawing::Point(-13, -2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(720, 102);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(9, 118);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(686, 360);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form2::pictureBox3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Khaki;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 20, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(267, 156);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 38);
			this->label3->TabIndex = 12;
			this->label3->Text = L"ALGORITHM";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Aquamarine;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(100, 218);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 56);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Preemptive";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(98, 297);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 46);
			this->button1->TabIndex = 15;
			this->button1->Text = L"SRTF";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Location = System::Drawing::Point(346, 466);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(16, 15);
			this->pictureBox9->TabIndex = 24;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form2::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Location = System::Drawing::Point(2, 463);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(16, 15);
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form2::pictureBox8_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(346, 114);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(16, 15);
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form2::pictureBox4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(2, 114);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(16, 15);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form2::pictureBox2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(680, 114);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(16, 15);
			this->pictureBox5->TabIndex = 25;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(680, 466);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(16, 15);
			this->pictureBox6->TabIndex = 26;
			this->pictureBox6->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SandyBrown;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 19);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(640, 67);
			this->label2->TabIndex = 27;
			this->label2->Text = L"PROCESS SCHEDULING";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click_1);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(379, 297);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 46);
			this->button2->TabIndex = 28;
			this->button2->Text = L"SJF";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(379, 362);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(241, 46);
			this->button3->TabIndex = 29;
			this->button3->Text = L"NPP";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click_1);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightPink;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(380, 218);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 56);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Non-Preemptive";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(21, 135);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 39);
			this->button4->TabIndex = 31;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(704, 496);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form2";
			this->Text = L"Algorithm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SRTF^ frm3 = gcnew SRTF(this);
	frm3->Show();
	Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SJF^ frm1 = gcnew SJF(this);
	frm1->Show();
	Hide();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Close();
	Form2View->Show(); //SHOWINGPREVIOUS FORM
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	NPP^ frm2 = gcnew NPP(this);
	frm2->Show();
	Hide();
}
};
}
#endif // !FORM2_H
