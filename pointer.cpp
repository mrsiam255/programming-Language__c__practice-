#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int cpuTime;
    int remainingTime;
    int waitingTime;
    int turnaroundTime;
};

void printWithTwoDecimalPlaces(float value) {
    int roundedValue = static_cast<int>(value * 100 + 0.5);
    cout << roundedValue / 100 << "." << (roundedValue % 100 < 10 ? "0" : "") << roundedValue % 100;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter the arrival times:\n";
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cin >> processes[i].arrivalTime;
    }

    cout << "Enter the CPU times:\n";
    for (int i = 0; i < n; i++) {
        cin >> processes[i].cpuTime;
        processes[i].remainingTime = processes[i].cpuTime;
        processes[i].waitingTime = 0;
        processes[i].turnaroundTime = 0;
    }

    int completed = 0, currentTime = 0;
    float totalWaitingTime = 0, totalTurnaroundTime = 0;

    while (completed < n) {
        int minIndex = -1;
        int minRemainingTime = INT_MAX;

        // Find the process with the smallest remaining time that has arrived
        for (int i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0) {
                if (processes[i].remainingTime < minRemainingTime) {
                    minRemainingTime = processes[i].remainingTime;
                    minIndex = i;
                }
            }
        }

        // If no process is ready to execute, increment time
        if (minIndex == -1) {
            currentTime++;
            continue;
        }

        // Process execution for one unit of time
        processes[minIndex].remainingTime--;
        currentTime++;

        // If the process has finished execution
        if (processes[minIndex].remainingTime == 0) {
            completed++;
            processes[minIndex].turnaroundTime = currentTime - processes[minIndex].arrivalTime;
            processes[minIndex].waitingTime = processes[minIndex].turnaroundTime - processes[minIndex].cpuTime;
            totalWaitingTime += processes[minIndex].waitingTime;
            totalTurnaroundTime += processes[minIndex].turnaroundTime;
        }
    }

    cout << "\nProcess\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << processes[i].id << "\t" << processes[i].waitingTime << "\t\t" << processes[i].turnaroundTime << endl;
    }

    cout << "Average Waiting Time: ";
    printWithTwoDecimalPlaces(totalWaitingTime / n);
    cout << endl;

    cout << "Average Turnaround Time: ";
    printWithTwoDecimalPlaces(totalTurnaroundTime / n);
    cout << endl;

    return 0;
}
