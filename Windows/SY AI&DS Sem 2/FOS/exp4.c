// accept burst time and arrival time for 4 processes and calculate the average waiting time and average turnaround time using FCFS scheduling algorithm.

#include <stdio.h>
void findWaitingTime(int processes[], int n, int bt[], int wt[], int at[])
{
    int i, time;
    wt[0] = 0;
    time = bt[0];
    for (i = 1; i < n; i++) {
        time += bt[i];
        wt[i] = time - at[i] - bt[i];
        if (wt[i] < 0) {
            wt[i] = 0;
        }
    }
}
void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{
    int i;
    for (i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}
void findAvgTime(int processes[], int n, int bt[], int at[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0, i;
    findWaitingTime(processes, n, bt, wt, at);
    findTurnAroundTime(processes, n, bt, wt, tat);
    for (i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
    }
    float avg_wt = (float)total_wt / (float)n;
    float avg_tat = (float)total_tat / (float)n;
    printf("Processes  Burst time  Arrival time  Waiting time  Turnaround time\n");
    for (i = 0; i < n; i++) {
        printf("   %d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i], bt[i], at[i], wt[i], tat[i]);
    }
    printf("Average waiting time = %.2f\n", avg_wt);
    printf("Average turnaround time = %.2f\n", avg_tat);
}
int main()
{
    int n, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    
    int processes[n], bt[n], at[n];
    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Arrival time: ");
        scanf("%d", &at[i]);
        printf("Burst time: ");
        scanf("%d", &bt[i]);
        processes[i] = i + 1;
    }
    
    findAvgTime(processes, n, bt, at);
    
    return 0;
}
