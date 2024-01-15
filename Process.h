#pragma once

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
    cp = completion time
    tt = turnaround time
    wt = waiting time
*/
struct Process_np {
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
struct Process_p {
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