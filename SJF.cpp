#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>
#include <tuple>
#include "Process.h"

// Main function for SJF
std::tuple<std::vector<Process_np>, std::vector<Time_process>> SJF(std::string arrival, std::string burst) {
    // vector for process inputs will be push to the processes vector
    // processes will be the raw input data, nothing will be changed here once done inputting
    std::vector<Process_np> processes;
    // temporary vector to get the completion time and original index of the process, it is pair since
    // the queue doesn't store the processes by their index
    std::vector<std::pair<size_t, unsigned>> completion;
    // vector for the ready queue of each process, once the arrival time is met or
    // (time = at) the process will be pushed to the queue according to the Shortest Job First algorithm
    // it will store the original index of each process and their Process structure
    std::vector<std::pair<size_t, Process_np>> queue;
    // vector to get the starting time and ending time of each process
    std::vector<Time_process> processing_time;
    /*
        at_num = temporary variable to store each input for arrival time
        bt_num = temporary variable to store each input for burst time
        time_sum = variable to compute the total burst time of all process,
        it will be used in the for loop once the algorithm is started
        TT = temporary variable to store the turnaround time of each processes
        id_num = process id of each process, incrementation is done inside the while loop for separation of inputs
    */
    unsigned at_num, bt_num, time_sum = 0, id_num = 1;
    // std::istringstream is used to separate a single input into multiple integers
    // it is used for inputs like arrival time and burst time
    std::istringstream ss_at(arrival);
    std::istringstream ss_bt(burst);
    // checking if the number of arrival time is equal to the number of burst time and their sign
    int value;
    size_t size_at = 0, size_bt = 0;
    while (ss_at >> value) {
        if (value < 0) {
            throw std::runtime_error("Negative number found");
        }
        else size_at++;
    }
    while (ss_bt >> value) {
        if (value < 0) {
            throw std::runtime_error("Negative number found");
        }
        else size_bt++;
    }
    if (size_at != size_bt) throw std::out_of_range("Number of arrival time is not equal to number of burst time");
    ss_at.clear();
    ss_at.seekg(0, std::ios::beg);
    ss_bt.clear();
    ss_bt.seekg(0, std::ios::beg);
    // while loop for separation of inputs and storing those values in the processes vector
    // alongside with summing up the burst time of each processes
    while (ss_at >> at_num && ss_bt >> bt_num) {
        Process_np p;
        p.id = id_num;
        p.at = static_cast<unsigned>(at_num);
        p.bt = static_cast<unsigned>(bt_num);
        processes.push_back(p);
        time_sum += bt_num;
        id_num++;
    }
    unsigned time = 0; // time is used to for identifying the current seconds/milliseconds each loop
    size_t j = 0; // j will be used to traverse the processes vector
    // sorting the vector by their arrival time, if equal a.at == b.at it will base on id
    std::sort(processes.begin(), processes.end(), [](const Process_np& a, const Process_np& b)
        { return a.at < b.at || (a.at == b.at && a.id < b.id); });
    // while loop for Shortest Job First algorithm
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
            // Each loop the queue will be sorted according to their shortest burst time or arrival time or ID
            std::sort(queue.begin(), queue.end(),
                [](const std::pair<size_t, Process_np>& a, const std::pair<size_t, Process_np>& b)
                { return (a.second.bt < b.second.bt)
                || (a.second.bt == b.second.bt && a.second.at < b.second.at)
                || (a.second.bt == b.second.bt && a.second.at == b.second.at && a.second.id < b.second.id); });
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
    std::sort(completion.begin(), completion.end(),
        [](const std::pair<size_t, unsigned>& a, const std::pair<size_t, unsigned>& b)
        { return a.first < b.first; });
    // for loop to compute for the turnaround time and waiting time for each processes
    for (size_t i = 0; i < processes.size(); i++) {
        processes[i].TTWT(completion[i].second);
    }
    return std::make_tuple(processes, processing_time);
}
