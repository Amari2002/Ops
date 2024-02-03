#pragma once
/*
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<utility>
#include<algorithm>
#include <cliext/list>

bool sorting(const NPPProcess& a, const NPPProcess& b) {
    return a.at < b.at || (a.at == b.at && a.id < b.id);
}

// Time_process to monitor the processing time of each process
// mainly to get the specific second/millisecond which they being processed
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
/*
// Main function
std::vector<NPPProcess> comp(std::vector<NPPProcess> processes, int time_sum) {
    // vector to get the completion time and original index of the process, it is pair since
    // the queue doesn't store the processes by their index
    std::vector<std::pair<int, int>> completion;
    // vector for the ready queue of each process, once the arrival time is met or
    // (time = at) the process will be pushed to the queue according to the Non-preemtive Priority algorithm
    // it will store the original index of each process and their Process structure
    std::vector<std::pair<int, NPPProcess>> queue;
    // vector to get the starting time and ending time of each process
    std::vector<Time_process> processing_time;
    int id_num = 1;
    // inputting of arrival time, burst time, and priority
    // checking if the number of arrival time is equal to the number of burst time and their sign
    int size_at = 0, size_bt = 0, size_pr = 0;
    int time = 0; // time is used to for identifying the current seconds/milliseconds each loop
    int j = 0; // j will be used to traverse the processes vector
    // sorting the vector by their arrival time, if equal a.at == b.at it will base on id
    std::sort(processes.begin(), processes.end(), [](const NPPProcess& a, const NPPProcess& b)
        { return a.at < b.at || (a.at == b.at && a.id < b.id); });
    // while loop for Non-Preemtive Priority algorithm
    // it is based on time which means it starts by 0 seconds/milliseconds
    // up until the total burst time - 1
    while (time < time_sum) {
        // while the arrival time is equal to the current time, it will be pushed to the queue
        // getting ready for processing
        while (time >= processes[j].at && j < processes.size()) {
            queue.push_back(std::make_pair(j, processes[j]));
            j++;
        }
        if (!queue.empty()) {
            // Each loop the queue will be sorted according to their priority or arrival time or ID
            std::sort(queue.begin(), queue.end(), [](const std::pair<int, NPPProcess>& a, const std::pair<int, NPPProcess>& b)
                { return (a.second.pr < b.second.pr)
                || (a.second.pr == b.second.pr && a.second.at < b.second.at)
                || (a.second.pr == b.second.pr && a.second.at == b.second.at && a.first < b.first); });
            // taking the process id to monitor their time of process
            Time_process current_process;
            current_process.p_id = queue[0].second.id;
            current_process.time.first = time;
            // the while loop will decrement the first process in the queue until reaching 0
            while (queue[0].second.bt > 0) {
                queue[0].second.bt--;
                time++;
            }
            current_process.time.second = time;
            processing_time.push_back(current_process);
            // after the loop, the current time will be stored to the completion vector,
            // along with the process which is done processing then erase the process to the queue
            completion.push_back(std::make_pair(queue[0].first, time));
            queue.erase(queue.begin());
        }
        else {
            // Idle time, the excess time will be added to the total time to reach the end time of process
            time++;
            time_sum++;
        }
    }
    // after completing the process of decrementation of burst time for each process,
    // the completion vector will be sorted based on the original index of each process ascendingly
    std::sort(completion.begin(), completion.end(), [](const std::pair<int, unsigned>& a, const std::pair<int, unsigned>& b)
        { return a.first < b.first; });
    // for loop to compute for the turnaround time and waiting time for each processes
    for (int i = 0; i < processes.size(); i++) {
        processes[i].TTWT(completion[i].second);
    }
    return processes;
}
*/