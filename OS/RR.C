#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main()
{
    int n, tq;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], remaining_time[n];
    int completion_time[n], waiting_time[n], turnaround_time[n];
    int queue[MAX], front = 0, rear = 0;
    bool in_queue[n];

    float total_waiting_time = 0, total_turnaround_time = 0;

    printf("Enter the arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Process %d Arrival Time: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Process %d Burst Time: ", i + 1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i];
        in_queue[i] = false;
    }

    printf("Enter the time quantum: ");
    scanf("%d", &tq);

    int time = 0, completed = 0;
    queue[rear++] = 0; // Push first process
    in_queue[0] = true;

    while (completed < n)
    {
        if (front == rear)
            break; // No process to schedule

        int i = queue[front++]; // Pop from queue

        if (remaining_time[i] > tq)
        {
            time += tq;
            remaining_time[i] -= tq;
        }
        else
        {
            time += remaining_time[i];
            remaining_time[i] = 0;
            completion_time[i] = time;
            turnaround_time[i] = completion_time[i] - arrival_time[i];
            waiting_time[i] = turnaround_time[i] - burst_time[i];
            total_waiting_time += waiting_time[i];
            total_turnaround_time += turnaround_time[i];
            completed++;
        }

        // Enqueue processes that arrive during execution
        for (int j = 0; j < n; j++)
        {
            if (!in_queue[j] && arrival_time[j] <= time && remaining_time[j] > 0)
            {
                queue[rear++] = j;
                in_queue[j] = true;
            }
        }

        // Re-queue current process if it's not finished
        if (remaining_time[i] > 0)
        {
            queue[rear++] = i;
        }

        // If queue becomes empty, push the next available process
        if (front == rear)
        {
            for (int j = 0; j < n; j++)
            {
                if (remaining_time[j] > 0)
                {
                    queue[rear++] = j;
                    in_queue[j] = true;
                    break;
                }
            }
        }
    }

    printf("\nProcess\tArrival\tBurst\tCompletion\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t\t%d\t%d\n", i + 1, arrival_time[i], burst_time[i], completion_time[i], waiting_time[i], turnaround_time[i]);
    }

    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);

    return 0;
}
