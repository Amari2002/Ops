#pragma once
#ifndef SJF_H
#define SJF_H


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
	

	


	struct Process {
		unsigned id = 0;
		unsigned at = 0;
		unsigned bt = 0;
		unsigned cp = 0;
		unsigned tt = 0;
		unsigned wt = 0;
		void TTWT(const unsigned& completion_time) {
			this->cp = completion_time;
			this->tt = this->cp - this->at;
			this->wt = this->tt - this->bt;
		}
	};
	/// <summary>
	/// Summary for SJF
	/// </summary>
	public ref class SJF : public System::Windows::Forms::Form
	{
	private:
		int arrivalTime;
		int burstTime;
	public:
		Form^ SJFView;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ SJFDataGrid;





	public:

	

	public:
	public:
		Form^ form1;
		SJF(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SJF(Form^ SJFViewParam) {
			SJFView = SJFViewParam;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SJF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxBurstTime;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxArrivalTime;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SJF::typeid));
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SJFDataGrid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SJFDataGrid))->BeginInit();
			this->SuspendLayout();
			this->textBoxBurstTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBurstTime->Location = System::Drawing::Point(154, 358);
			this->textBoxBurstTime->MaxLength = 23;
			this->textBoxBurstTime->Multiline = true;
			this->textBoxBurstTime->Name = L"textBoxBurstTime";
			this->textBoxBurstTime->Size = System::Drawing::Size(430, 51);
			this->textBoxBurstTime->TabIndex = 57;
			this->textBoxBurstTime->TextChanged += gcnew System::EventHandler(this, &SJF::textBox2_TextChanged);
			this->textBoxArrivalTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxArrivalTime->Location = System::Drawing::Point(154, 239);
			this->textBoxArrivalTime->MaxLength = 23;
			this->textBoxArrivalTime->Multiline = true;
			this->textBoxArrivalTime->Name = L"textBoxArrivalTime";
			this->textBoxArrivalTime->Size = System::Drawing::Size(430, 51);
			this->textBoxArrivalTime->TabIndex = 58;
			this->textBoxArrivalTime->TextChanged += gcnew System::EventHandler(this, &SJF::textBox1_TextChanged);
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(313, 432);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 33);
			this->button1->TabIndex = 56;
			this->button1->Text = L"COMPUTE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SJF::button1_Click);
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 25.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(533, 142);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 51);
			this->label6->TabIndex = 55;
			this->label6->Text = L"INPUT";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &SJF::label6_Click);
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SandyBrown;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(560, 81);
			this->label2->TabIndex = 54;
			this->label2->Text = L"PROCESS SCHEDULING";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(223, 306);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 38);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Burst Time";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Khaki;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 188);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 32);
			this->label3->TabIndex = 52;
			this->label3->Text = L"SJF";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(223, 188);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 38);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Arrival Time";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pictureBox3->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox3->Location = System::Drawing::Point(10, 130);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(704, 396);
			this->pictureBox3->TabIndex = 50;
			this->pictureBox3->TabStop = false;
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->Location = System::Drawing::Point(-3, 11);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(728, 102);
			this->pictureBox1->TabIndex = 49;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SJF::pictureBox1_Click);
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(22, 142);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 39);
			this->button4->TabIndex = 59;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SJF::button4_Click);
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Khaki;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 24.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 473);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 41);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Output";
			this->SJFDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SJFDataGrid->Location = System::Drawing::Point(10, 529);
			this->SJFDataGrid->Name = L"SJFDataGrid";
			this->SJFDataGrid->Size = System::Drawing::Size(704, 281);
			this->SJFDataGrid->TabIndex = 62;
			this->SJFDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SJF::dataGridView1_CellContentClick_1);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::LightPink;
			this->ClientSize = System::Drawing::Size(739, 535);
			this->Controls->Add(this->SJFDataGrid);
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
			this->Name = L"SJF";
			this->Text = L"SJF";
			this->Load += gcnew System::EventHandler(this, &SJF::SJF_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SJFDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
	SJFView->Show();
}
private: System::Void SJF_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ar = textBoxArrivalTime->Text;
	String^ br = textBoxBurstTime->Text;

	// Split the input into individual values for arrival time and burst time
	array<String^>^ arrivalValues = ar->Split(' ');
	array<String^>^ burstValues = br->Split(' ');

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

	// Check if the number of parsed values for arrival time and burst time match
	if (parsedArrivalValues.size() != parsedBurstValues.size()) {
		MessageBox::Show("Number of values for arrival time and burst time must be the same.", "Error");
		return;
	}

	SJFDataGrid->RowCount = parsedArrivalValues.size();
	SJFDataGrid->ColumnCount = 6; // Set ColumnCount to 6 for process ID, arrival time, burst time, completion time, turnaround time, and waiting time

	// Create columns explicitly and set headers
	SJFDataGrid->Columns->Add("Process", "Process");
	SJFDataGrid->Columns->Add("ArrivalTime", "Arrival Time");
	SJFDataGrid->Columns->Add("BurstTime", "Burst Time");
	SJFDataGrid->Columns->Add("CompletionTime", "Completion Time");
	SJFDataGrid->Columns->Add("TurnaroundTime", "Turnaround Time");
	SJFDataGrid->Columns->Add("WaitingTime", "Waiting Time");

	// Set the display order of the columns
	SJFDataGrid->Columns["Process"]->DisplayIndex = 0;
	SJFDataGrid->Columns["ArrivalTime"]->DisplayIndex = 1;
	SJFDataGrid->Columns["BurstTime"]->DisplayIndex = 2;
	SJFDataGrid->Columns["CompletionTime"]->DisplayIndex = 3;
	SJFDataGrid->Columns["TurnaroundTime"]->DisplayIndex = 4;
	SJFDataGrid->Columns["WaitingTime"]->DisplayIndex = 5;

	// Call a separate member function to perform SJF algorithm
	SJFScheduling(parsedArrivalValues, parsedBurstValues);

}

	   // Define a separate comparison function outside the class
private:
	// Define a static member function for comparison
	static bool CompareProcesses(const Process& a, const Process& b) {
		return a.at < b.at || (a.at == b.at && a.id < b.id);
	}
	   // Define a separate member function for SJF algorithm
private: void SJFScheduling(cliext::list<int> arrivalValues, cliext::list<int> burstValues) {
	int time = 0;  // Variable to keep track of completion time
	int totalTime = 0;  // Variable to store the total time for idle time calculation

	// Vector for process inputs that will be pushed to the processes vector
	std::vector<Process> processes;

	// Use iterators to traverse through the cliext::list<int>
	cliext::list<int>::iterator arrivalIter = arrivalValues.begin();
	cliext::list<int>::iterator burstIter = burstValues.begin();

	// Parse the input and create Process objects
	while (arrivalIter != arrivalValues.end() && burstIter != burstValues.end()) {
		Process p;
		p.id = processes.size() + 1;  // ID is based on the number of processes already added
		p.at = *arrivalIter;
		p.bt = *burstIter;
		processes.push_back(p);

		// Move to the next element in the lists
		++arrivalIter;
		++burstIter;
	}

	// Sorting processes based on arrival time and ID
	std::sort(processes.begin(), processes.end(), CompareProcesses);

	// SJF algorithm
	for (int i = 0; i < processes.size(); ++i) {
		int burstTime = processes[i].bt;

		// Calculate completion time
		time += burstTime;

		// Update process completion time
		processes[i].cp = time;

		// Calculate turnaround time and waiting time
		processes[i].tt = processes[i].cp - processes[i].at;
		processes[i].wt = processes[i].tt - processes[i].bt;

		processes[i].tt = (processes[i].tt < 0) ? 0 : processes[i].tt;
		processes[i].wt = (processes[i].wt < 0) ? 0 : processes[i].wt;

		// Update DataGridView cell values
		SJFDataGrid->Rows[i]->Cells["Process"]->Value = processes[i].id;
		SJFDataGrid->Rows[i]->Cells["ArrivalTime"]->Value = processes[i].at;
		SJFDataGrid->Rows[i]->Cells["BurstTime"]->Value = burstTime;
		SJFDataGrid->Rows[i]->Cells["CompletionTime"]->Value = processes[i].cp;
		SJFDataGrid->Rows[i]->Cells["TurnaroundTime"]->Value = processes[i].tt;
		SJFDataGrid->Rows[i]->Cells["WaitingTime"]->Value = processes[i].wt;

		totalTime += burstTime;
	}

	// Add an extra row for idle time if needed (similar to the console code)
	if (totalTime < time) {
		SJFDataGrid->RowCount++;
		int newRow = SJFDataGrid->RowCount - 1;
		SJFDataGrid->Rows[newRow]->Cells["Process"]->Value = processes.size() + 1;
		SJFDataGrid->Rows[newRow]->Cells["ArrivalTime"]->Value = time;
		SJFDataGrid->Rows[newRow]->Cells["BurstTime"]->Value = 0;
		SJFDataGrid->Rows[newRow]->Cells["CompletionTime"]->Value = time;
		SJFDataGrid->Rows[newRow]->Cells["TurnaroundTime"]->Value = 0;
		SJFDataGrid->Rows[newRow]->Cells["WaitingTime"]->Value = 0;
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
};
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#endif // !SJF_H
