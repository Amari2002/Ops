#pragma once
#ifndef FCFS_H
#define FCFS_H

#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>
#include<stdlib.h>
#include <stdexcept>
#include <cliext/list>
struct FCFSProcess {
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
namespace Ops {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FCFS
	/// </summary>
	public ref class FCFS : public System::Windows::Forms::Form
	{
	public:
		Form^ FCFSView;
	public:
		FCFS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FCFS(Form^ FCFSViewParam) {
			FCFSView = FCFSViewParam;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FCFS()
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
	private: System::Windows::Forms::DataGridView^ FCFSDataGrid;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FCFS::typeid));
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
			this->FCFSDataGrid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FCFSDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Aquamarine;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 533);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 41);
			this->label5->TabIndex = 73;
			this->label5->Text = L"OUTPUT";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(25, 132);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 39);
			this->button4->TabIndex = 72;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FCFS::button4_Click);
			// 
			// textBoxBurstTime
			// 
			this->textBoxBurstTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBurstTime->Location = System::Drawing::Point(157, 347);
			this->textBoxBurstTime->MaxLength = 35;
			this->textBoxBurstTime->Multiline = true;
			this->textBoxBurstTime->Name = L"textBoxBurstTime";
			this->textBoxBurstTime->Size = System::Drawing::Size(430, 51);
			this->textBoxBurstTime->TabIndex = 70;
			// 
			// textBoxArrivalTime
			// 
			this->textBoxArrivalTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxArrivalTime->Location = System::Drawing::Point(157, 223);
			this->textBoxArrivalTime->MaxLength = 35;
			this->textBoxArrivalTime->Multiline = true;
			this->textBoxArrivalTime->Name = L"textBoxArrivalTime";
			this->textBoxArrivalTime->Size = System::Drawing::Size(430, 51);
			this->textBoxArrivalTime->TabIndex = 71;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(301, 430);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 33);
			this->button1->TabIndex = 69;
			this->button1->Text = L"COMPUTE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FCFS::button1_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(541, 132);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 51);
			this->label6->TabIndex = 68;
			this->label6->Text = L"INPUT";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SandyBrown;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 35, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(49, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(640, 67);
			this->label2->TabIndex = 67;
			this->label2->Text = L"PROCESS SCHEDULING";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(226, 306);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 38);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Burst Time";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Khaki;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 182);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 32);
			this->label3->TabIndex = 65;
			this->label3->Text = L"FCFS";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(226, 182);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 38);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Arrival Time";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &FCFS::label4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox3->Location = System::Drawing::Point(11, 119);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(704, 736);
			this->pictureBox3->TabIndex = 63;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(739, 102);
			this->pictureBox1->TabIndex = 62;
			this->pictureBox1->TabStop = false;
			// 
			// FCFSDataGrid
			// 
			this->FCFSDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FCFSDataGrid->Location = System::Drawing::Point(33, 589);
			this->FCFSDataGrid->Name = L"FCFSDataGrid";
			this->FCFSDataGrid->Size = System::Drawing::Size(668, 276);
			this->FCFSDataGrid->TabIndex = 74;
			this->FCFSDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FCFS::FCFSDataGrid_CellContentClick);
			// 
			// FCFS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(739, 498);
			this->Controls->Add(this->FCFSDataGrid);
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
			this->Name = L"FCFS";
			this->Text = L"FCFS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FCFSDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		Close();
		FCFSView->Show();
	}
	private: System::Void FCFSDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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
		// Sort the parsed arrival time values
		//parsedArrivalValues.sort();
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
		std::vector<FCFSProcess> processes;

		// Check if the number of parsed values for arrival time and burst time match
		if (parsedArrivalValues.size() != parsedBurstValues.size()) {
			MessageBox::Show("Number of values for arrival time and burst time must be the same.", "Error");
			return;
		}
		double time_sum = 0;
		cliext::list<int>::iterator ArrivalIterator = parsedArrivalValues.begin();
		cliext::list<int>::iterator BurstIterator = parsedBurstValues.begin();
		for (int i = 0; i < parsedArrivalValues.size(); i++) {
			FCFSProcess pairs;
			pairs.id = i + 1;
			pairs.at = *ArrivalIterator;
			pairs.bt = *BurstIterator;
			processes.push_back(pairs);
			time_sum += pairs.bt;
			++ArrivalIterator;
			++BurstIterator;
		}
		double total_time = time_sum;
		for (int i = 0; i < processes.size(); i++) {
			if (processes[i].at < 0) {
				MessageBox::Show("You entered a negative value for arrival time, please enter a valid input", "Error");
				return;
			}
			else if (processes[i].bt < 0) {
				MessageBox::Show("You entered a negative value for burst time, please enter a valid input", "Error");
				return;
			}
			else if (processes[i].bt == 0) {
				MessageBox::Show("burst time cannot be 0, please enter a valid input", "Error");
				return;
			}
		}

		for (int i = 0; i < processes.size(); i++) {
			for (int j = 0; j < processes.size() - 1; j++) {
				FCFSProcess tp;
				if (processes[j].at > processes[j + 1].at || (processes[j].at == processes[j + 1].at && processes[j].id > processes[j + 1].id)) {
					tp = processes[j];
					processes[j] = processes[j + 1];
					processes[j + 1] = tp;
				}
			}
		}
		std::vector<unsigned> completion;
		std::vector<FCFSProcess> queue;
		int idle_time = 0, time = 0, j = 0;
		while (time < time_sum) {
			while (j < processes.size() && time >= processes[j].at) {
				queue.push_back(processes[j]);
				j++;
			}
			if (!queue.empty()) {
				// the while loop will decrement the first process in the queue until reaching 0
				while (queue[0].bt > 0) {
					queue[0].bt--;
					time++;
				}
				// after the loop, the current time will be stored to the completion vector,
				// then erase the process to the queue
				completion.push_back(time);
				queue.erase(queue.begin());
			}
			else {
				// Idle time, the excess time will be added to the total time to reach the end time of process
				time++;
				time_sum++;
			}
			idle_time++;
		}
		for (size_t i = 0; i < processes.size(); i++) {
			processes[i].TTWT(completion[i]);
		}
		// Use the parsed values to set up the FCFSDataGrid
		FCFSDataGrid->RowCount = parsedArrivalValues.size();
		FCFSDataGrid->ColumnCount = 6; // Set ColumnCount to 6 for process ID, arrival time, burst time, completion time, turnaround time, and waiting time

		// Create columns explicitly and set headers
		FCFSDataGrid->Columns->Add("Process", "Process");
		FCFSDataGrid->Columns->Add("ArrivalTime", "Arrival Time");
		FCFSDataGrid->Columns->Add("BurstTime", "Burst Time");
		FCFSDataGrid->Columns->Add("CompletionTime", "Completion Time"); // Add column for Completion Time
		FCFSDataGrid->Columns->Add("TurnaroundTime", "Turnaround Time"); // Add column for Turnaround Time
		FCFSDataGrid->Columns->Add("WaitingTime", "Waiting Time"); // Add column for Waiting Time
		FCFSDataGrid->Columns->Add("CPU Utilization", "CPU Utilization"); // Add column for Waiting Time
		// Set the display order of the columns
		FCFSDataGrid->Columns["Process"]->DisplayIndex = 0;
		FCFSDataGrid->Columns["ArrivalTime"]->DisplayIndex = 1;
		FCFSDataGrid->Columns["BurstTime"]->DisplayIndex = 2;
		FCFSDataGrid->Columns["CompletionTime"]->DisplayIndex = 3; // Set "CompletionTime" column to be the fourth column
		FCFSDataGrid->Columns["TurnaroundTime"]->DisplayIndex = 4; // Set "TurnaroundTime" column to be the fifth column
		FCFSDataGrid->Columns["WaitingTime"]->DisplayIndex = 5; // Set "WaitingTime" column to be the sixth column
		FCFSDataGrid->Columns["CPU Utilization"]->DisplayIndex = 6; // Set "WaitingTime" column to be the sixth column
		// Perform FCFS scheduling to calculate completion time, turnaround time, and waiting time
		int currentTime = 0;
		int processID = 1;

		//cliext::list<int>::iterator arrivalIterator = parsedArrivalValues.begin();
		//cliext::list<int>::iterator burstIterator = parsedBurstValues.begin();
		int Fi = 0;
		for (Fi = 0; Fi < processes.size(); ++Fi) {
			//int arrivalTime = *arrivalIterator;
			//int burstTime = *burstIterator;

			// Update the "Process" column
			FCFSDataGrid->Rows[Fi]->Cells["Process"]->Value = processes[Fi].id;

			// Update the "Arrival Time" column
			FCFSDataGrid->Rows[Fi]->Cells["ArrivalTime"]->Value = processes[Fi].at;

			// Update the "Burst Time" column
			FCFSDataGrid->Rows[Fi]->Cells["BurstTime"]->Value = processes[Fi].bt;
			// Update Completion Time
			//int completionTime = Math::Max(currentTime, processes[Fi].at) + processes[Fi].bt;
			FCFSDataGrid->Rows[Fi]->Cells["CompletionTime"]->Value = processes[Fi].cp;

			// Update Turnaround Time
			//int turnaroundTime = completionTime - processes[Fi].at;
			FCFSDataGrid->Rows[Fi]->Cells["TurnaroundTime"]->Value = processes[Fi].tt;

			// Update Waiting Time
			//int waitingTime = turnaroundTime - processes[Fi].bt;
			FCFSDataGrid->Rows[Fi]->Cells["WaitingTime"]->Value = processes[Fi].wt;

			// Move to the next process
			//currentTime = completionTime;
			++processID;

			//++arrivalIterator;
			//++burstIterator;

		}
		time_sum--;
		double CPU_util = ceil((total_time / time_sum) * 100);
		//int waitingTime = turnaroundTime - processes[Fi].bt;
		FCFSDataGrid->Rows[0]->Cells["CPU Utilization"]->Value = CPU_util;
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
#endif