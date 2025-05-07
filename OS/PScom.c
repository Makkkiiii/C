#include <stdio.h> // Includes the standard input/output library for functions like printf and scanf

int main() // Main function where the program starts execution
{
    int n, i, j, completed = 0, current_time = 0, is_preemptive, priority_type; // Declares variables for process count, loop counters, completed process count, current time, and user choices for scheduling and priority type
    printf("Enter the number of processes: ");                                  // Prompts the user to enter the number of processes
    scanf("%d", &n);                                                            // Reads the number of processes from the user

    // Arrays to store process details and results
    int arrival_time[n], burst_time[n], remaining_time[n], priority[n]; // Arrays for arrival time, burst time, remaining time, and priority of each process
    int waiting_time[n], turnaround_time[n], completion_time[n];        // Arrays for waiting time, turnaround time, and completion time of each process
    float total_waiting_time = 0, total_turnaround_time = 0;            // Variables to store total waiting time and total turnaround time for calculating averages

    // Input arrival time, burst time, and priority for each process
    printf("Enter the arrival time, burst time, and priority for each process:\n"); // Prompts the user to enter process details
    for (i = 0; i < n; i++)                                                         // Loop through each process
    {
        printf("Process %d Arrival Time: ", i + 1); // Prompts for arrival time of process i+1
        scanf("%d", &arrival_time[i]);              // Reads arrival time
        printf("Process %d Burst Time: ", i + 1);   // Prompts for burst time of process i+1
        scanf("%d", &burst_time[i]);                // Reads burst time
        printf("Process %d Priority: ", i + 1);     // Prompts for priority of process i+1
        scanf("%d", &priority[i]);                  // Reads priority
        remaining_time[i] = burst_time[i];          // Initializes remaining time to burst time since no execution has occurred yet
    }

    // Ask user for scheduling type (preemptive or non-preemptive)
    printf("Choose scheduling type:\n1. Preemptive\n2. Non-Preemptive\n"); // Prompts user to choose scheduling type
    scanf("%d", &is_preemptive);                                           // Reads the user's choice for scheduling type

    // Ask user for priority type (lower = higher or higher = higher priority)
    printf("Choose priority type:\n1. Lower number = Higher priority\n2. Higher number = Higher priority\n"); // Prompts user to choose priority type
    scanf("%d", &priority_type);                                                                              // Reads the user's choice for priority type

    // Priority Scheduling
    while (completed < n) // Loop until all processes are completed
    {
        int selected_process = -1; // Variable to store the index of the selected process
        int best_priority;         // Variable to store the best priority value

        // Initialize best priority based on priority type
        if (priority_type == 1) // If lower number means higher priority
        {
            best_priority = 1000000000; // Set a very high number as the initial "lowest" priority
        }
        else // If higher number means higher priority
        {
            best_priority = -1; // Set a very low number as the initial "highest" priority
        }

        // Find the process with the best priority that is ready to execute
        for (i = 0; i < n; i++) // Loop through all processes
        {
            if (arrival_time[i] > current_time || remaining_time[i] <= 0) // Skip if process hasn't arrived or is already completed
                continue;

            int is_better = 0; // Flag to check if the current process has a better priority

            if (priority_type == 1 && priority[i] < best_priority) // If lower number means higher priority and current process has a better priority
                is_better = 1;
            else if (priority_type == 2 && priority[i] > best_priority) // If higher number means higher priority and current process has a better priority
                is_better = 1;

            if (is_better) // If the current process has a better priority
            {
                best_priority = priority[i]; // Update the best priority
                selected_process = i;        // Select the current process
            }
        }

        if (selected_process == -1) // If no process is ready to execute
        {
            current_time++; // Increment the current time
        }
        else // If a process is selected
        {
            if (is_preemptive == 1) // If preemptive scheduling is chosen
            {
                remaining_time[selected_process]--; // Execute the selected process for 1 unit of time
                current_time++;                     // Increment the current time

                if (remaining_time[selected_process] == 0) // If the process is completed
                {
                    completion_time[selected_process] = current_time;                                                       // Record the completion time
                    turnaround_time[selected_process] = completion_time[selected_process] - arrival_time[selected_process]; // Calculate turnaround time
                    waiting_time[selected_process] = turnaround_time[selected_process] - burst_time[selected_process];      // Calculate waiting time
                    total_waiting_time += waiting_time[selected_process];                                                   // Add to total waiting time
                    total_turnaround_time += turnaround_time[selected_process];                                             // Add to total turnaround time
                    completed++;                                                                                            // Increment the completed process count
                }
            }
            else // If non-preemptive scheduling is chosen
            {
                current_time += remaining_time[selected_process];                                                       // Execute the selected process until completion
                completion_time[selected_process] = current_time;                                                       // Record the completion time
                turnaround_time[selected_process] = completion_time[selected_process] - arrival_time[selected_process]; // Calculate turnaround time
                waiting_time[selected_process] = turnaround_time[selected_process] - burst_time[selected_process];      // Calculate waiting time
                total_waiting_time += waiting_time[selected_process];                                                   // Add to total waiting time
                total_turnaround_time += turnaround_time[selected_process];                                             // Add to total turnaround time
                remaining_time[selected_process] = 0;                                                                   // Mark the process as completed
                completed++;                                                                                            // Increment the completed process count
            }
        }
    }

    // Display results
    printf("\nProcess\tArrival Time\tBurst Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n"); // Print table header
    for (i = 0; i < n; i++)                                                                                    // Loop through all processes
    {
        printf("%d\t%12d\t%10d\t%8d\t%15d\t%12d\t%15d\n", i + 1, arrival_time[i], burst_time[i], priority[i], completion_time[i], waiting_time[i], turnaround_time[i]); // Print process details
    }

    // Display averages
    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);     // Calculate and display average waiting time
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n); // Calculate and display average turnaround time

    return 0; // End the program
}