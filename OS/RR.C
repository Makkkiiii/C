#include <stdio.h>

int main()
{
    int n, i, time = 0, completed = 0, tq;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], remaining_time[n], completion_time[n];
    int waiting_time[n], turnaround_time[n];
    float total_waiting_time = 0, total_turnaround_time = 0;

    // Input arrival time and burst time
    printf("Enter the arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d Arrival Time: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Process %d Burst Time: ", i + 1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i]; // Initialize remaining time
    }

    // Input time quantum
    printf("Enter the time quantum: ");
    scanf("%d", &tq);

    // Round Robin Scheduling
    while (completed < n)
    {
        int done = 1; // Flag to check if all processes are completed

        for (i = 0; i < n; i++)
        {
            if (remaining_time[i] > 0 && arrival_time[i] <= time)
            {
                done = 0; // At least one process is not completed

                if (remaining_time[i] > tq)
                {
                    time += tq;
                    remaining_time[i] -= tq;
                }
                else
                {
                    time += remaining_time[i];
                    completion_time[i] = time;
                    turnaround_time[i] = completion_time[i] - arrival_time[i];
                    waiting_time[i] = turnaround_time[i] - burst_time[i];
                    remaining_time[i] = 0;
                    completed++;
                }
            }
        }

        if (done)
        {
            // If no process is ready, increment time
            time++;
        }
    }

    // Calculate total waiting and turnaround times
    for (i = 0; i < n; i++)
    {
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
    }

    // Display results
    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%12d\t%10d\t%15d\t%12d\t%15d\n", i + 1, arrival_time[i], burst_time[i], completion_time[i], waiting_time[i], turnaround_time[i]);
    }

    // Display averages
    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);

    return 0;
}