#pragma once
#ifndef NPP_H
#define NPP_H
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>
#include<stdlib.h>
#include <stdexcept>
#include <cliext/list>
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
	private: System::Windows::Forms::DataGridView^ NPPDataGrid;
	private: System::Windows::Forms::TextBox^ textBoxPriority;

	private: System::Windows::Forms::Label^ label7;
	public:
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
			this->NPPDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxPriority = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPPDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Khaki;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 590);
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
			this->button4->Location = System::Drawing::Point(23, 132);
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
			this->textBoxBurstTime->Location = System::Drawing::Point(155, 348);
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
			this->textBoxArrivalTime->Location = System::Drawing::Point(155, 229);
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
			this->button1->Location = System::Drawing::Point(288, 547);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 33);
			this->button1->TabIndex = 82;
			this->button1->Text = L"COMPUTE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NPP::button1_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(534, 132);
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
			this->label2->Location = System::Drawing::Point(9, 10);
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
			this->label1->Location = System::Drawing::Point(224, 296);
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
			this->label3->Location = System::Drawing::Point(17, 178);
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
			this->label4->Location = System::Drawing::Point(224, 178);
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
			this->pictureBox3->Location = System::Drawing::Point(11, 120);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(704, 798);
			this->pictureBox3->TabIndex = 76;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->Location = System::Drawing::Point(-2, 1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(740, 102);
			this->pictureBox1->TabIndex = 75;
			this->pictureBox1->TabStop = false;
			// 
			// NPPDataGrid
			// 
			this->NPPDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->NPPDataGrid->Location = System::Drawing::Point(27, 634);
			this->NPPDataGrid->Name = L"NPPDataGrid";
			this->NPPDataGrid->Size = System::Drawing::Size(658, 256);
			this->NPPDataGrid->TabIndex = 87;
			this->NPPDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NPP::NPPDataGrid_CellContentClick);
			// 
			// textBoxPriority
			// 
			this->textBoxPriority->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPriority->Location = System::Drawing::Point(155, 470);
			this->textBoxPriority->MaxLength = 23;
			this->textBoxPriority->Multiline = true;
			this->textBoxPriority->Name = L"textBoxPriority";
			this->textBoxPriority->Size = System::Drawing::Size(430, 51);
			this->textBoxPriority->TabIndex = 88;
			this->textBoxPriority->TextChanged += gcnew System::EventHandler(this, &NPP::textBoxPriority_TextChanged);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(224, 419);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(277, 38);
			this->label7->TabIndex = 89;
			this->label7->Text = L"Priority";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NPP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(739, 691);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxPriority);
			this->Controls->Add(this->NPPDataGrid);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPPDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		NPPView->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ar = textBoxArrivalTime->Text;
	String^ br = textBoxBurstTime->Text;
	String^ pr = textBoxPriority->Text; // Assuming textBoxPriority is the name of your priority input textbox

	// Split the input into individual values for arrival time, burst time, and priority
	array<String^>^ arrivalValues = ar->Split(' ');
	array<String^>^ burstValues = br->Split(' ');
	array<String^>^ priorityValues = pr->Split(' '); // Split the priority input

	// Validate and parse each value for arrival time
	cliext::list<int> parsedArrivalValues;
	for each (String ^ value in arrivalValues) {
		int parsedValue;
		if (Int32::TryParse(value, parsedValue)) {
			parsedArrivalValues.push_back(parsedValue);
		}
		else {
			MessageBox::Show("Invalid input for arrival time. Please enter valid numeric values separated by space.", "Error");
			return;
		}
	}

	// Validate and parse each value for burst time
	cliext::list<int> parsedBurstValues;
	for each (String ^ value in burstValues) {
		int parsedValue;
		if (Int32::TryParse(value, parsedValue)) {
			parsedBurstValues.push_back(parsedValue);
		}
		else {
			MessageBox::Show("Invalid input for burst time. Please enter valid numeric values separated by space.", "Error");
			return;
		}
	}

	// Validate and parse each value for priority
	cliext::list<int> parsedPriorityValues;
	for each (String ^ value in priorityValues) {
		int parsedValue;
		if (Int32::TryParse(value, parsedValue)) {
			parsedPriorityValues.push_back(parsedValue);
		}
		else {
			MessageBox::Show("Invalid input for priority. Please enter valid numeric values separated by space.", "Error");
			return;
		}
	}

	// Check if the number of parsed values for arrival time, burst time, and priority match
	if (parsedArrivalValues.size() != parsedBurstValues.size() || parsedArrivalValues.size() != parsedPriorityValues.size()) {
		MessageBox::Show("Number of values for arrival time, burst time, and priority must be the same.", "Error");
		return;
	}

	// Use the parsed values to set up the SJFDataGrid
	NPPDataGrid->RowCount = parsedArrivalValues.size();
	NPPDataGrid->ColumnCount = 4; // Set ColumnCount to 4 for process ID, arrival time, burst time, and priority

	// Create columns explicitly and set headers
	NPPDataGrid->Columns->Add("Process", "Process");
	NPPDataGrid->Columns->Add("ArrivalTime", "Arrival Time");
	NPPDataGrid->Columns->Add("BurstTime", "Burst Time");
	NPPDataGrid->Columns->Add("Priority", "Priority"); // Add column for Priority

	// Set the display order of the columns
	NPPDataGrid->Columns["Process"]->DisplayIndex = 0;
	NPPDataGrid->Columns["ArrivalTime"]->DisplayIndex = 1;
	NPPDataGrid->Columns["BurstTime"]->DisplayIndex = 2;
	NPPDataGrid->Columns["Priority"]->DisplayIndex = 3; // Set "Priority" column to be the fourth column

	// Populate the cells with parsed values for arrival time, burst time, and priority
	int i = 0;
	int processID = 1;
	for each (int arrivalValue in parsedArrivalValues) {
		// Set the process ID in the first column
		NPPDataGrid->Rows[i]->Cells["Process"]->Value = processID;

		// Set the arrival time in the second column
		NPPDataGrid->Rows[i]->Cells["ArrivalTime"]->Value = arrivalValue;

		// Set the burst time in the third column
		NPPDataGrid->Rows[i]->Cells["BurstTime"]->Value = burstValues[i];

		// Set the priority in the fourth column
		NPPDataGrid->Rows[i]->Cells["Priority"]->Value = priorityValues[i];

		++i;
		++processID;
	}
}
private: System::Void NPPDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBoxPriority_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#endif