#include<iostream>
#include<vector>
#include<sstream>
#include<utility>
#include<algorithm>
#include<tuple>
#include"Process.h"

// Main function for SRTF
std::tuple<std::vector<Process_np>, std::vector<Time_process>> SRTF(std::string arrival, std::string burst) {
    // vector for process inputs will be push to the processes vector
    // processes will be the raw input data, nothing will be changed here once done inputting
    std::vector<Process_np> processes;
    // vector for the ready queue of each process, once the arrival time is met or
    // (time = at) the process will be pushed to the queue according to the Shortest Remaining Time First algorithm
    // it will store the original index of each process and their Process structure
    std::vector<std::pair<size_t, Process_np>> queue;
    // vector to get the completion time and original index of the process, it is pair since
    // the queue doesn't store the processes by their index
    std::vector<std::pair<size_t, unsigned>> completion;
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
    // sorting the vector by their arrival time, if equal a.at == b.at it will base on id
    std::sort(processes.begin(), processes.end(), [](const Process_np& a, const Process_np& b)
        { return a.at < b.at || (a.at == b.at && a.id < b.id); });
    size_t j = 0; // j will be used to traverse the processes vector
    Time_process current;
    // for loop for Shortest Remaining Time First algorithm
    // it is based on time which means it starts by 0 seconds/milliseconds
    // up until the total burst time - 1
    for (unsigned time = 0; time < time_sum; time++) {
        // while the arrival time is equal to the current time, it will be pushed to the queue
        // getting ready for processing
        while (time == processes[j].at) {
            queue.push_back(std::make_pair(j, processes[j]));
            j++;
        }
        if (!queue.empty()) {
            // Each loop the queue will be sorted according to their shortest burst time or arrival time or ID
            std::sort(queue.begin(), queue.end(), [](const std::pair<size_t, Process_np>& a, const std::pair<size_t, Process_np>& b)
                { return (a.second.bt < b.second.bt)
                || (a.second.bt == b.second.bt && a.second.at < b.second.at)
                || (a.second.bt == b.second.bt && a.second.at == b.second.at && a.first < b.first); });

            if (queue[0].second.id != current.p_id) {
                processing_time.push_back(current);
                current.p_id = queue[0].second.id;
                current.time.first = time;
            }
            // decrementing the burst time of the first process in the queue
            queue[0].second.bt--;
            // if the burst time reach 0 it means its done, then the current time will be pushed to the completion vector
            // then erasing the first element in the queue, else moving the first element of the queue to the back of the queue
            if (queue[0].second.bt == 0) {
                current.time.second = time + 1;
                processing_time.push_back(current);
                completion.push_back(std::make_pair(queue[0].first, time + 1));
                queue.erase(queue.begin());
            }
        }
        else {
            // Idle time, the excess time will be added to the total time to reach the end time of process
            time_sum++;
        }
        current.time.second = time + 1;
    }
    std::sort(processing_time.begin(), processing_time.end(), [](const Time_process& a, const Time_process& b) {
        return a.p_id < b.p_id; });
    auto uniqueEnd = std::unique(processing_time.begin(), processing_time.end(),
        [](const Time_process& a, const Time_process& b) {
            return a.p_id == b.p_id &&
                a.time.first == b.time.first &&
                a.time.second == b.time.second;
        });
    processing_time.erase(uniqueEnd, processing_time.end());
    std::sort(processing_time.begin(), processing_time.end(), [](const Time_process& a, const Time_process& b) {
        return a.time.first < b.time.first; });
    // after completing the process of decrementation of burst time for each process,
    // the completion vector will be sorted based on the original index of each process ascendingly
    std::sort(completion.begin(), completion.end(), [](const std::pair<size_t, unsigned>& a, const std::pair<size_t, unsigned>& b)
        { return a.first < b.first; });
    // for loop to compute for the turnaround time and waiting time for each processes
    for (size_t i = 0; i < processes.size(); i++) {
        processes[i].TTWT(completion[i].second);
    }
    return std::make_tuple(processes, processing_time);
}