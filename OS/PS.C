#include <stdio.h>

int main()
{
    int n, i, j, completed = 0, current_time = 0, is_preemptive, priority_type;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], remaining_time[n], priority[n];
    int waiting_time[n], turnaround_time[n], completion_time[n];
    float total_waiting_time = 0, total_turnaround_time = 0;

    // Input arrival time, burst time, and priority
    printf("Enter the arrival time, burst time, and priority for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d Arrival Time: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Process %d Burst Time: ", i + 1);
        scanf("%d", &burst_time[i]);
        printf("Process %d Priority: ", i + 1);
        scanf("%d", &priority[i]);
        remaining_time[i] = burst_time[i]; // Copying remaining time from burst time since nothing has been executed yet.
    }

    // Ask user for scheduling type (preemptive or non-preemptive)
    printf("Choose scheduling type:\n1. Preemptive\n2. Non-Preemptive\n");
    scanf("%d", &is_preemptive);

    // Ask user for priority type (lower = higher or higher = higher priority)
    printf("Choose priority type:\n1. Lower number = Higher priority\n2. Higher number = Higher priority\n");
    scanf("%d", &priority_type);

    // Priority Scheduling
    while (completed < n) // WILL RUN THE PROGRAM UNTIL ALL PROCESSES ARE COMPLETED
    {
        int selected_process = -1;
        int best_priority;

        if (priority_type == 1)
        {
            best_priority = 1000000000; // very high number for "lowest" priority
        }
        else
        {
            best_priority = -1; // very low number for "highest" priority
        }

        for (i = 0; i < n; i++)
        {
            if (arrival_time[i] > current_time || remaining_time[i] <= 0)
                continue; // Skip if process hasn't arrived or is already completed

            int is_better = 0;

            if (priority_type == 1 && priority[i] < best_priority)
                is_better = 1;
            else if (priority_type == 2 && priority[i] > best_priority)
                is_better = 1;

            if (is_better)
            {
                best_priority = priority[i];
                selected_process = i;
            }
        }

        if (selected_process == -1)
        {
            // If no process is ready, increment time
            current_time++;
        }
        else
        {
            if (is_preemptive == 1)
            {
                // Preemptive: Execute the selected process for 1 unit of time
                remaining_time[selected_process]--;
                current_time++;

                if (remaining_time[selected_process] == 0)
                {
                    completion_time[selected_process] = current_time;
                    turnaround_time[selected_process] = completion_time[selected_process] - arrival_time[selected_process];
                    waiting_time[selected_process] = turnaround_time[selected_process] - burst_time[selected_process];
                    total_waiting_time += waiting_time[selected_process];
                    total_turnaround_time += turnaround_time[selected_process];
                    completed++;
                }
            }
            else
            {
                // Non-Preemptive: Execute the selected process until completion
                current_time += remaining_time[selected_process];
                completion_time[selected_process] = current_time;
                turnaround_time[selected_process] = completion_time[selected_process] - arrival_time[selected_process];
                waiting_time[selected_process] = turnaround_time[selected_process] - burst_time[selected_process];
                total_waiting_time += waiting_time[selected_process];
                total_turnaround_time += turnaround_time[selected_process];
                remaining_time[selected_process] = 0;
                completed++;
            }
        }
    }

    // Display results
    printf("\nProcess\tArrival Time\tBurst Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%12d\t%10d\t%8d\t%15d\t%12d\t%15d\n", i + 1, arrival_time[i], burst_time[i], priority[i], completion_time[i], waiting_time[i], turnaround_time[i]);
    }

    // Display averages
    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);

    return 0;
}