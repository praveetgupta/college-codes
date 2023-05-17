#include <stdio.h>

void calculateTimes(int n, int burstTime[], int waitingTime[], int turnaroundTime[]) {
    // Calculating waiting time for each process
    waitingTime[0] = 0;  // The first process has a waiting time of 0

    for (int i = 1; i < n; i++) {
        waitingTime[i] = waitingTime[i - 1] + burstTime[i - 1];
    }

    // Calculating turnaround time for each process
    for (int i = 0; i < n; i++) {
        turnaroundTime[i] = waitingTime[i] + burstTime[i];
    }
}

void displayTimes(int n, int burstTime[], int waitingTime[], int turnaroundTime[]) {
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, burstTime[i], waitingTime[i], turnaroundTime[i]);
    }

    // Calculating and displaying average waiting time and turnaround time
    int totalWaitingTime = 0, totalTurnaroundTime = 0;
    for (int i = 0; i < n; i++) {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }

    printf("\nAverage Waiting Time: %.2f\n", (float)totalWaitingTime / n);
    printf("Average Turnaround Time: %.2f\n", (float)totalTurnaroundTime / n);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burstTime[n], waitingTime[n], turnaroundTime[n];

    // Reading burst time for each process
    printf("Enter the burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
    }

    calculateTimes(n, burstTime, waitingTime, turnaroundTime);
    displayTimes(n, burstTime, waitingTime, turnaroundTime);

    return 0;
}
