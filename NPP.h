#pragma once
#ifndef NPP_H
#define NPP_H
namespace Ops {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NPP
	/// </summary>
	public ref class NPP : public System::Windows::Forms::Form
	{
	public:
		Form^ NPPView;
	public:
		Form^ form2;
		NPP(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NPP(Form^ NPPViewParam)
		{
			NPPView = NPPViewParam;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NPP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Output;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBoxBurstTime;
	private: System::Windows::Forms::TextBox^ textBoxArrivalTime;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NPP::typeid));
			this->Output = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxBurstTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArrivalTime = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Output
			// 
			this->Output->AutoSize = true;
			this->Output->Location = System::Drawing::Point(42, 589);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(35, 13);
			this->Output->TabIndex = 87;
			this->Output->Text = L"label7";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Khaki;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 531);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 41);
			this->label5->TabIndex = 86;
			this->label5->Text = L"Output";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(23, 140);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 39);
			this->button4->TabIndex = 85;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &NPP::button4_Click);
			// 
			// textBoxBurstTime
			// 
			this->textBoxBurstTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBurstTime->Location = System::Drawing::Point(155, 356);
			this->textBoxBurstTime->MaxLength = 23;
			this->textBoxBurstTime->Multiline = true;
			this->textBoxBurstTime->Name = L"textBoxBurstTime";
			this->textBoxBurstTime->Size = System::Drawing::Size(430, 51);
			this->textBoxBurstTime->TabIndex = 83;
			// 
			// textBoxArrivalTime
			// 
			this->textBoxArrivalTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxArrivalTime->Location = System::Drawing::Point(155, 237);
			this->textBoxArrivalTime->MaxLength = 23;
			this->textBoxArrivalTime->Multiline = true;
			this->textBoxArrivalTime->Name = L"textBoxArrivalTime";
			this->textBoxArrivalTime->Size = System::Drawing::Size(430, 51);
			this->textBoxArrivalTime->TabIndex = 84;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(314, 430);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 33);
			this->button1->TabIndex = 82;
			this->button1->Text = L"COMPUTE";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(534, 140);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 51);
			this->label6->TabIndex = 81;
			this->label6->Text = L"INPUT";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SandyBrown;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 18);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(560, 81);
			this->label2->TabIndex = 80;
			this->label2->Text = L"PROCESS SCHEDULING";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(224, 304);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 38);
			this->label1->TabIndex = 79;
			this->label1->Text = L"Burst Time";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Khaki;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 186);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 32);
			this->label3->TabIndex = 78;
			this->label3->Text = L"NPP";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(224, 186);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 38);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Arrival Time";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox3->Location = System::Drawing::Point(11, 128);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(704, 736);
			this->pictureBox3->TabIndex = 76;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->Location = System::Drawing::Point(-2, 9);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(740, 102);
			this->pictureBox1->TabIndex = 75;
			this->pictureBox1->TabStop = false;
			// 
			// NPP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 498);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBoxBurstTime);
			this->Controls->Add(this->textBoxArrivalTime);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"NPP";
			this->Text = L"NPP";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		NPPView->Show();
	}
};
}
#endif