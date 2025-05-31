#include <stdio.h>

int main()
{
    int n, i, j, completed = 0, current_time = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], waiting_time[n], turnaround_time[n], completion_time[n];
    int is_completed[n];
    float total_waiting_time = 0, total_turnaround_time = 0;

    // Initialize is_completed array to 0
    for (i = 0; i < n; i++)
    {
        is_completed[i] = 0;
    }

    // Input arrival time and burst time
    printf("Enter the arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d Arrival Time: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Process %d Burst Time: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    // FCFS Scheduling
    while (completed < n)
    {
        int selected_process = -1;
        int earliest_arrival = 1e9;

        // Find the process with the earliest arrival time that is not completed
        for (i = 0; i < n; i++)
        {
            if (arrival_time[i] <= current_time && !is_completed[i])
            {
                if (arrival_time[i] < earliest_arrival)
                {
                    earliest_arrival = arrival_time[i];
                    selected_process = i;
                }
            }
        }

        if (selected_process == -1)
        {
            // If no process has arrived yet, increment time
            current_time++;
        }
        else
        {
            // Execute the selected process
            current_time += burst_time[selected_process];
            completion_time[selected_process] = current_time;
            turnaround_time[selected_process] = completion_time[selected_process] - arrival_time[selected_process];
            waiting_time[selected_process] = turnaround_time[selected_process] - burst_time[selected_process];

            total_waiting_time += waiting_time[selected_process];
            total_turnaround_time += turnaround_time[selected_process];
            is_completed[selected_process] = 1;
            completed++;
        }
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
