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
        remaining_time[i] = burst_time[i]; // Initialize remaining time
    }

    // Ask user for scheduling type (preemptive or non-preemptive)
    printf("Choose scheduling type:\n1. Preemptive\n2. Non-Preemptive\n");
    scanf("%d", &is_preemptive);

    // Ask user for priority type (lower = higher or higher = higher priority)
    printf("Choose priority type:\n1. Lower number = Higher priority\n2. Higher number = Higher priority\n");
    scanf("%d", &priority_type);

    // Variables for Gantt chart
    int gantt_chart[1000], gantt_time[1000], gantt_index = 0;

    // Priority Scheduling
    while (completed < n)
    {
        int selected_process = -1;
        int best_priority = (priority_type == 1) ? 1e9 : -1; // Initialize based on priority type

        // Find the process with the highest priority that has arrived
        for (i = 0; i < n; i++)
        {
            if (arrival_time[i] <= current_time && remaining_time[i] > 0)
            {
                if ((priority_type == 1 && priority[i] < best_priority) ||
                    (priority_type == 2 && priority[i] > best_priority))
                {
                    best_priority = priority[i];
                    selected_process = i;
                }
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
                gantt_chart[gantt_index] = selected_process + 1;
                gantt_time[gantt_index] = current_time;
                gantt_index++;
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
                gantt_chart[gantt_index] = selected_process + 1;
                gantt_time[gantt_index] = current_time;
                gantt_index++;
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

    // Add the final time to the Gantt chart
    gantt_time[gantt_index] = current_time;

    // Display results
    printf("\nProcess\tArrival Time\tBurst Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%12d\t%10d\t%8d\t%15d\t%12d\t%15d\n", i + 1, arrival_time[i], burst_time[i], priority[i], completion_time[i], waiting_time[i], turnaround_time[i]);
    }

    // Display averages
    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);

    // Display Gantt chart
    printf("\nGantt Chart:\n");
    for (i = 0; i < gantt_index; i++)
    {
        printf("| P%d ", gantt_chart[i]);
    }
    printf("|\n");

    for (i = 0; i <= gantt_index; i++)
    {
        printf("%d    ", gantt_time[i]);
    }
    printf("\n");

    return 0;
}
