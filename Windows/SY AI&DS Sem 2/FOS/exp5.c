/*Write A program to calculate the total waiting time, and turnaround time of n number of processes with SJF CPU scheduling algorithm in C*/

#include <stdio.h>

void SJF(int n, int bt[], int wt[], int tat[])
{
    int i, j, temp, p[n];
    float avgwt = 0, avgtat = 0;

    // Initialize process array
    for (i = 0; i < n; i++)
    {
        p[i] = i;
    }

    // Sort processes by burst time
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (bt[p[i]] > bt[p[j]])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    // Calculate waiting time and turnaround time
    for (i = 0; i < n; i++)
    {
        wt[p[i]] = 0;
        for (j = 0; j < i; j++)
        {
            wt[p[i]] += bt[p[j]];
        }
        tat[p[i]] = bt[p[i]] + wt[p[i]];
        avgwt += wt[p[i]];
        avgtat += tat[p[i]];
    }

    // Print results
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", p[i], bt[p[i]], wt[p[i]], tat[p[i]]);
    }
    avgwt /= n;
    avgtat /= n;
    printf("Average waiting time: %.2f\n", avgwt);
    printf("Average turnaround time: %.2f\n", avgtat);
}

int main()
{
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int bt[n], wt[n], tat[n];
    printf("Enter the burst times:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    SJF(n, bt, wt, tat);
    return 0;
}
