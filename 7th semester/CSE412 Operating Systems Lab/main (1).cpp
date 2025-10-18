#include <iostream>
using namespace std;

struct Process {
    int id, at, bt, ct, tat, wt;
};


int main() {
    Process p[5];
    int n = 5;
    
    // Taking input
    cout << "Enter Arrival Time and Burst Time for 5 processes:" << endl;
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Process " << p[i].id << " Arrival Time: ";
        cin >> p[i].at;
        cout << "Process " << p[i].id << " Burst Time: ";
        cin >> p[i].bt;
    }
    
    // Sorting by Arrival Time (FCFS scheduling)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i].at > p[j].at) {
                swap(p[i], p[j]);
            }
        }
    }
    
    // Calculating Completion Time, Turnaround Time, and Waiting Time
    int time = 0;
    for (int i = 0; i < n; i++) {
        if (time < p[i].at) time = p[i].at; // CPU idle time handling
        
        p[i].ct = time + p[i].bt;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        
        time = p[i].ct;
    }
    
    // Displaying results
    cout << "\nProcess	AT\tBT\tCT\tTAT\tWT" << endl;
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i].id << "\t" << p[i].at << "\t" << p[i].bt << "\t"
             << p[i].ct << "\t" << p[i].tat << "\t" << p[i].wt << endl;
    }
    
    return 0;
}
