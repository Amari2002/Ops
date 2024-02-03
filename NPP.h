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
#include <iostream>

struct Time_process {
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
struct NPPProcess {
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
	// Get the input values from the textboxes
	String^ arrivalInput = textBoxArrivalTime->Text;
	String^ burstInput = textBoxBurstTime->Text;
	String^ priorityInput = textBoxPriority->Text; // Assuming you have a textBoxPriority for input

	// Split the input strings into arrays
	array<String^>^ arrivalTimes = arrivalInput->Split(' ');
	array<String^>^ burstTimes = burstInput->Split(' ');
	array<String^>^ priorityValues = priorityInput->Split(' '); // Split priority input

	// Check if the number of inputs is the same for arrival, burst, and priority
	if (arrivalTimes->Length != burstTimes->Length || arrivalTimes->Length != priorityValues->Length) {
		MessageBox::Show("Number of arrival times, burst times, and priorities must be equal.", "Error");
		return;
	}

	// Create vectors to store process data
	std::vector<int> arrivalVector;
	std::vector<int> burstVector;
	std::vector<int> priorityVector;

	// Parse the input strings into integer vectors
	for each (String ^ arrivalStr in arrivalTimes) {
		int arrival;
		if (Int32::TryParse(arrivalStr, arrival)) {
			arrivalVector.push_back(arrival);
		}
		else {
			MessageBox::Show("Invalid input for arrival time. Please enter valid numeric values separated by space.", "Error");
			return;
		}
	}

	for each (String ^ burstStr in burstTimes) {
		int burst;
		if (Int32::TryParse(burstStr, burst)) {
			burstVector.push_back(burst);
		}
		else {
			MessageBox::Show("Invalid input for burst time. Please enter valid numeric values separated by space.", "Error");
			return;
		}
	}

	for each (String ^ priorityStr in priorityValues) {
		int priority;
		if (Int32::TryParse(priorityStr, priority)) {
			priorityVector.push_back(priority);
		}
		else {
			MessageBox::Show("Invalid input for priority. Please enter valid numeric values separated by space.", "Error");
			return;
		}
	}

	// Validate the vectors
	if (arrivalVector.empty() || burstVector.empty() || priorityVector.empty()) {
		MessageBox::Show("Please enter valid numeric values for arrival, burst, and priority.", "Error");
		return;
	}
	
	int time_sum = 0, time = 0, j = 0;
	std::vector<NPPProcess> processes;
	// Perform the NPP algorithm logic here
	for (int i = 0; i < arrivalVector.size() && i < burstVector.size() && i < priorityVector.size(); i++) {
		NPPProcess p;
		p.id = i + 1;
		p.at = arrivalVector[i];
		p.bt = burstVector[i];
		p.pr = priorityVector[i];
		time_sum += p.bt;
		processes.push_back(p);
	}
	std::vector<std::pair<int, unsigned>> completion;
	std::vector<std::pair<int, NPPProcess>> queue;
	std::vector<Time_process> processing_time;
	for (int i = 0; i < processes.size(); i++) {
		for (int j = 0; j < processes.size() - 1; j++) {
			NPPProcess tp;
			if (processes[j].at > processes[j + 1].at
				|| (processes[j].at == processes[j + 1].at && processes[j].id > processes[j + 1].id)) {
				tp = processes[j];
				processes[j] = processes[j + 1];
				processes[j + 1] = tp;
			}
		}
	}
	while (time < time_sum) {
		// while the arrival time is equal to the current time, it will be pushed to the queue
		// getting ready for processing
		while (j < processes.size() && time >= processes[j].at ) {
			queue.push_back(std::make_pair(j, processes[j]));
			j++;
			std::cout << "PR PUSHED TO THE QUEUE" << std::endl;
		}
		if (queue.size() > 0) {
			// Each loop the queue will be sorted according to their priority or arrival time or ID
			for (int i = 0; i < queue.size(); i++) {
				for (int j = 0; j < queue.size() - 1; j++) {
					std::pair<int, NPPProcess> tp;
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
			std::cout << "QUEUE HAS BEEN SORTED" << std::endl;
			// taking the process id to monitor their time of process
			Time_process current_process;
			current_process.p_id = queue[0].second.id;
			current_process.time.first = time;
			// the while loop will decrement the first process in the queue until reaching 0
			while (queue[0].second.bt > 0) {
				queue[0].second.bt--;
				time++;
			}
			std::cout << "QUEUE HAS BEEN USED BURST" << std::endl;
			current_process.time.second = time;
			processing_time.push_back(current_process);
			// after the loop, the current time will be stored to the completion vector,
			// along with the process which is done processing then erase the process to the queue
			completion.push_back(std::make_pair(queue[0].first, time));
			queue.erase(queue.begin());
			std::cout << "QUEUE HAS BEEN ERASED" << std::endl;
		}
		else {
			// Idle time, the excess time will be added to the total time to reach the end time of process
			time++;
			time_sum++;
			std::cout << "IDLE TIME" << std::endl;
		}
	}
	for (int i = 0; i < completion.size(); i++) {
		for (int j = 0; j < completion.size() - 1; j++) {
			std::pair<int, unsigned> tp;
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
	// Display the output in the DataGridView
	NPPDataGrid->RowCount = arrivalVector.size();
	NPPDataGrid->ColumnCount = 7; // Set ColumnCount for process details
	
	// Set column headers
	NPPDataGrid->Columns->Add("ID", "ID");
	NPPDataGrid->Columns->Add("AT", "Arrival Time");
	NPPDataGrid->Columns->Add("BT", "Burst Time");
	NPPDataGrid->Columns->Add("PR", "Priority");
	NPPDataGrid->Columns->Add("CT", "Completion Time");
	NPPDataGrid->Columns->Add("TT", "Turnaround Time");
	NPPDataGrid->Columns->Add("WT", "Waiting Time");

	// Set the display order of the columns
	NPPDataGrid->Columns["ID"]->DisplayIndex = 0;
	NPPDataGrid->Columns["AT"]->DisplayIndex = 1;
	NPPDataGrid->Columns["BT"]->DisplayIndex = 2;
	NPPDataGrid->Columns["PR"]->DisplayIndex = 3;
	NPPDataGrid->Columns["CT"]->DisplayIndex = 4;
	NPPDataGrid->Columns["TT"]->DisplayIndex = 5;
	NPPDataGrid->Columns["WT"]->DisplayIndex = 6;

	int completionTime = 0; // Initialize completion time for the first process

	for (int i = 0; i < processes.size(); i++) {
		NPPDataGrid->Rows[i]->Cells["ID"]->Value = processes[i].id;
		NPPDataGrid->Rows[i]->Cells["AT"]->Value = processes[i].at;
		NPPDataGrid->Rows[i]->Cells["BT"]->Value = processes[i].bt;
		NPPDataGrid->Rows[i]->Cells["PR"]->Value = processes[i].pr;

		// Completion Time calculation
		completionTime += burstVector[i] + 1;
		NPPDataGrid->Rows[i]->Cells["CT"]->Value = processes[i].cp;

		// Turnaround Time calculation
		int turnaroundTime = completionTime - arrivalVector[i];
		NPPDataGrid->Rows[i]->Cells["TT"]->Value = processes[i].tt;

		// Waiting Time calculation
		int waitingTime = turnaroundTime - burstVector[i];
		NPPDataGrid->Rows[i]->Cells["WT"]->Value = processes[i].wt;

	
	}
	// Update the DataGridView to reflect the changes
	NPPDataGrid->Refresh();
}

private: System::Void NPPDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBoxPriority_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#endif