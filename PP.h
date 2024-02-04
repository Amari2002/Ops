#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>
#include<stdlib.h>
#include <stdexcept>
#include <cliext/list>
#include <iostream>


struct Time_PPprocess {
	unsigned p_id = 0;
	std::pair<unsigned, unsigned> time;
};

/*
	Process structure, this is where the attributes of each process is stored
	id = process id number
	at = arrival time
	bt = burst time
	pr = priority
	cp = completion time
	tt = turnaround time
	wt = waiting time
*/
struct PPPProcess {
	unsigned id = 0;
	unsigned at = 0;
	unsigned bt = 0;
	unsigned pr = 0;
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
	/// Summary for PP
	/// </summary>
	public ref class PP : public System::Windows::Forms::Form
	{
	public:
		Form^ PPView;
	public:
		PP(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		PP(Form^ PPViewParam) {
			PPView = PPViewParam;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxPriority;
	private: System::Windows::Forms::DataGridView^ PPDataGrid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBoxBurstTime;
	private: System::Windows::Forms::TextBox^ textBoxArrivalTime;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PP::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxPriority = (gcnew System::Windows::Forms::TextBox());
			this->PPDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxBurstTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArrivalTime = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PPDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(224, 399);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(277, 38);
			this->label7->TabIndex = 104;
			this->label7->Text = L"Priority";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxPriority
			// 
			this->textBoxPriority->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPriority->Location = System::Drawing::Point(155, 440);
			this->textBoxPriority->MaxLength = 23;
			this->textBoxPriority->Multiline = true;
			this->textBoxPriority->Name = L"textBoxPriority";
			this->textBoxPriority->Size = System::Drawing::Size(430, 51);
			this->textBoxPriority->TabIndex = 103;
			// 
			// PPDataGrid
			// 
			this->PPDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PPDataGrid->Location = System::Drawing::Point(27, 632);
			this->PPDataGrid->Name = L"PPDataGrid";
			this->PPDataGrid->Size = System::Drawing::Size(658, 256);
			this->PPDataGrid->TabIndex = 102;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Aquamarine;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 588);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 41);
			this->label5->TabIndex = 101;
			this->label5->Text = L"Output";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(23, 130);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 39);
			this->button4->TabIndex = 100;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &PP::button4_Click);
			// 
			// textBoxBurstTime
			// 
			this->textBoxBurstTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBurstTime->Location = System::Drawing::Point(155, 328);
			this->textBoxBurstTime->MaxLength = 23;
			this->textBoxBurstTime->Multiline = true;
			this->textBoxBurstTime->Name = L"textBoxBurstTime";
			this->textBoxBurstTime->Size = System::Drawing::Size(430, 51);
			this->textBoxBurstTime->TabIndex = 98;
			// 
			// textBoxArrivalTime
			// 
			this->textBoxArrivalTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxArrivalTime->Location = System::Drawing::Point(155, 217);
			this->textBoxArrivalTime->MaxLength = 23;
			this->textBoxArrivalTime->Multiline = true;
			this->textBoxArrivalTime->Name = L"textBoxArrivalTime";
			this->textBoxArrivalTime->Size = System::Drawing::Size(430, 51);
			this->textBoxArrivalTime->TabIndex = 99;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(296, 506);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 33);
			this->button1->TabIndex = 97;
			this->button1->Text = L"COMPUTE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PP::button1_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(534, 130);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 51);
			this->label6->TabIndex = 96;
			this->label6->Text = L"INPUT";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(224, 287);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 38);
			this->label1->TabIndex = 94;
			this->label1->Text = L"Burst Time";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Khaki;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(17, 176);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 32);
			this->label3->TabIndex = 93;
			this->label3->Text = L"PP";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(224, 176);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 38);
			this->label4->TabIndex = 92;
			this->label4->Text = L"Arrival Time";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox3->Location = System::Drawing::Point(11, 118);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(704, 798);
			this->pictureBox3->TabIndex = 91;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &PP::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->Location = System::Drawing::Point(-2, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(740, 102);
			this->pictureBox1->TabIndex = 90;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::SandyBrown;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Black", 35, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(41, 20);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(640, 67);
			this->label8->TabIndex = 105;
			this->label8->Text = L"PROCESS SCHEDULING";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(739, 570);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxPriority);
			this->Controls->Add(this->PPDataGrid);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBoxBurstTime);
			this->Controls->Add(this->textBoxArrivalTime);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PP";
			this->Text = L"PP";
			this->Load += gcnew System::EventHandler(this, &PP::PP_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PPDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PP_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		PPView->Show();
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
		std::vector<PPPProcess> processes;
		std::vector<std::pair<int, int>> completion;
		std::vector<std::pair<int, PPPProcess>> queue;
		std::vector<Time_PPprocess> processing_time;
		int time_sum = 0, j = 0, time = 0;
		cliext::list<int>::iterator arrivalIterator = parsedArrivalValues.begin();
		cliext::list<int>::iterator burstIterator = parsedBurstValues.begin();
		cliext::list<int>::iterator priorityIterator = parsedPriorityValues.begin();
		for (int i = 0; i < parsedArrivalValues.size() && i < parsedArrivalValues.size() && i < parsedPriorityValues.size(); i++) {
			PPPProcess p;
			p.id = i + 1;
			p.at = *arrivalIterator;
			p.bt = *burstIterator;
			p.pr = *priorityIterator;
			time_sum += p.bt;
			processes.push_back(p);
			++arrivalIterator;
			++burstIterator;
			++priorityIterator;
		}
		for (int i = 0; i < processes.size(); i++) {
			for (int j = 0; j < processes.size() - 1; j++) {
				PPPProcess tp;
				if (processes[j].at > processes[j + 1].at
					|| (processes[j].at == processes[j + 1].at && processes[j].id > processes[j + 1].id)) {
					tp = processes[j];
					processes[j] = processes[j + 1];
					processes[j + 1] = tp;
				}
			}
		}
		for (unsigned time = 0; time < time_sum; time++) {
			// while the arrival time is equal to the current time, it will be pushed to the queue
			// getting ready for processing
			while (j < processes.size() && time == processes[j].at) {
				queue.push_back(std::make_pair(j, processes[j]));
				j++;
			}
			if (queue.size() > 0) {
				// Each loop the queue will be sorted according to their priority or arrival time or ID
				for (int i = 0; i < queue.size(); i++) {
					for (int j = 0; j < queue.size() - 1; j++) {
						std::pair<int, PPPProcess> tp;
						std::cout << "WE ARE SORTING QUEUE" << std::endl;
						if ((queue[j].second.pr > queue[j + 1].second.pr)
							|| (queue[j].second.pr == queue[j + 1].second.pr && queue[j].second.at > queue[j + 1].second.at)
							|| (queue[j].second.pr == queue[j + 1].second.pr && queue[j].second.at == queue[j + 1].second.at && queue[j].first > queue[j + 1].first)) {
							tp = queue[j];
							queue[j] = queue[j + 1];
							queue[j + 1] = tp;
						}
					}
				}
				// decrementing the burst time of the first process in the queue
				queue[0].second.bt--;
				// if the burst time reach 0 it means its done, then the current time will be pushed to the completion vector
				// then erasing the first element in the queue, else moving the first element of the queue to the back of the queue
				if (queue[0].second.bt == 0) {
					completion.push_back(std::make_pair(queue[0].first, time + 1));
					queue.erase(queue.begin());
				}
			}
			else {
				// Idle time, the excess time will be added to the total time to reach the end time of process
				time_sum++;
			}
		}
		for (int i = 0; i < completion.size(); i++) {
			for (int j = 0; j < completion.size() - 1; j++) {
				std::pair<int, int> tp;
				if (completion[j].first > completion[j + 1].first) {
					tp = completion[j];
					completion[j] = completion[j + 1];
					completion[j + 1] = tp;
				}
			}
			std::cout << "SORTING THE COMPLETION" << std::endl;
		}
		for (int i = 0; i < processes.size(); i++) {
			processes[i].TTWT(completion[i].second);
			std::cout << "COMPUTING THE TTWT" << std::endl;
		}
		PPDataGrid->RowCount = parsedArrivalValues.size();
		PPDataGrid->ColumnCount = 4; // Set ColumnCount to 4 for process ID, arrival time, burst time, and priority

		// Create columns explicitly and set headers
		PPDataGrid->Columns->Add("Process", "Process");
		PPDataGrid->Columns->Add("ArrivalTime", "Arrival Time");
		PPDataGrid->Columns->Add("BurstTime", "Burst Time");
		PPDataGrid->Columns->Add("Priority", "Priority"); // Add column for Priority
		PPDataGrid->Columns->Add("CT", "Completion Time");
		PPDataGrid->Columns->Add("TT", "Turnaround Time");
		PPDataGrid->Columns->Add("WT", "Waiting Time");

		// Set the display order of the columns
		PPDataGrid->Columns["Process"]->DisplayIndex = 0;
		PPDataGrid->Columns["ArrivalTime"]->DisplayIndex = 1;
		PPDataGrid->Columns["BurstTime"]->DisplayIndex = 2;
		PPDataGrid->Columns["Priority"]->DisplayIndex = 3; // Set "Priority" column to be the fourth column
		PPDataGrid->Columns["CT"]->DisplayIndex = 4;
		PPDataGrid->Columns["TT"]->DisplayIndex = 5;
		PPDataGrid->Columns["WT"]->DisplayIndex = 6;

		// Populate the cells with parsed values for arrival time, burst time, and priority
		int i = 0;
		int processID = 1;
		for (int i = 0; i < processes.size(); i++) {
			// Set the process ID in the first column
			PPDataGrid->Rows[i]->Cells["Process"]->Value = processes[i].id;

			// Set the arrival time in the second column
			PPDataGrid->Rows[i]->Cells["ArrivalTime"]->Value = processes[i].at;

			// Set the burst time in the third column
			PPDataGrid->Rows[i]->Cells["BurstTime"]->Value = processes[i].bt;

			// Set the priority in the fourth column
			PPDataGrid->Rows[i]->Cells["Priority"]->Value = processes[i].pr;

			PPDataGrid->Rows[i]->Cells["CT"]->Value = processes[i].cp;

			// Turnaround Time calculation
			PPDataGrid->Rows[i]->Cells["TT"]->Value = processes[i].tt;

			// Waiting Time calculation
			PPDataGrid->Rows[i]->Cells["WT"]->Value = processes[i].wt;
		}
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}