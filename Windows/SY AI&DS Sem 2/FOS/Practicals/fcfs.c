#include <stdio.h>

// Function to calculate waiting time for each process
void findWaitingTime(int processes[], int n, int bt[], int wt[], int at[])
{
    int i, time;
    wt[0] = 0;
    time = bt[0];

    for (i = 1; i < n; i++)
    {
        // Calculate the time when the process finishes execution
        time += bt[i];

        // Calculate the waiting time by subtracting arrival time and burst time from the finishing time
        wt[i] = time - at[i] - bt[i];

        // If waiting time is negative, set it to 0 (no negative waiting time)
        if (wt[i] < 0)
        {
            wt[i] = 0;
        }
    }
}

// Function to calculate turnaround time for each process
void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{
    int i;

    for (i = 0; i < n; i++)
    {
        // Turnaround time is the sum of burst time and waiting time
        tat[i] = bt[i] + wt[i];
    }
}

// Function to calculate average waiting time and turnaround time
void findAvgTime(int processes[], int n, int bt[], int at[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0, i;

    // Calculate waiting time and turnaround time for each process
    findWaitingTime(processes, n, bt, wt, at);
    findTurnAroundTime(processes, n, bt, wt, tat);

    // Calculate total waiting time and total turnaround time
    for (i = 0; i < n; i++)
    {
        total_wt += wt[i];
        total_tat += tat[i];
    }

    // Calculate average waiting time and average turnaround time
    float avg_wt = (float)total_wt / (float)n;
    float avg_tat = (float)total_tat / (float)n;

    // Print the results
    printf("Processes  Burst time  Arrival time  Waiting time  Turnaround time\n");
    for (i = 0; i < n; i++)
    {
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

    // Prompt the user to enter arrival time and burst time for each process
    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d:\n", i + 1);
        printf("Arrival time: ");
        scanf("%d", &at[i]);
        printf("Burst time: ");
        scanf("%d", &bt[i]);
        processes[i] = i + 1;
    }

    // Calculate and display the average waiting time and turnaround time
    findAvgTime(processes, n, bt, at);

    return 0;
}
