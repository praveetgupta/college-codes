#include <stdio.h>

void calculateTimes(int n, int burstTime[], int quantum, int waitingTime[], int turnaroundTime[]) {
    int remainingTime[n]; // Stores the remaining burst time for each process

    for (int i = 0; i < n; i++) {
        remainingTime[i] = burstTime[i]; // Initialize remaining time with burst time
    }

    int currentTime = 0; // Current time
    int completed = 0; // Number of completed processes

    while (completed != n) {
        for (int i = 0; i < n; i++) {
            if (remainingTime[i] > 0) {
                // Execute a process for the time quantum or remaining burst time, whichever is smaller
                int executionTime = (remainingTime[i] <= quantum) ? remainingTime[i] : quantum;

                remainingTime[i] -= executionTime; // Decrement remaining time
                currentTime += executionTime; // Update current time
                waitingTime[i] = currentTime - burstTime[i]; // Calculate waiting time
                turnaroundTime[i] = currentTime; // Calculate turnaround time

                completed += (remainingTime[i] <= 0); // Increment completed processes if remaining time is zero or negative
            }
        }
    }
}

void displayTimes(int n, int burstTime[], int waitingTime[], int turnaroundTime[]) {
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, burstTime[i], waitingTime[i], turnaroundTime[i]);
    }

    int totalWaitingTime = 0, totalTurnaroundTime = 0;

    for (int i = 0; i < n; i++) {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }

    printf("\nAverage Waiting Time: %.2f\n", (float)totalWaitingTime / n);
    printf("Average Turnaround Time: %.2f\n", (float)totalTurnaroundTime / n);
}

int main() {
    int n, quantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burstTime[n], waitingTime[n], turnaroundTime[n];

    printf("Enter the burst time for each process:\n");

    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
    }

    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    calculateTimes(n, burstTime, quantum, waitingTime, turnaroundTime);
    displayTimes(n, burstTime, waitingTime, turnaroundTime);

    return 0;
}
