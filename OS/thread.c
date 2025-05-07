#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *file_system_thread(void *arg)
{
    printf("File system thread is running.\n");
    sleep(1);
    printf("File system thread has finished.\n");
    return NULL;
}

void *printing_thread(void *arg)
{
    printf("Printing thread is running.\n");
    sleep(1);
    printf("Printing thread has finished.\n");
    return NULL;
}

void *network_thread(void *arg)
{
    printf("Network thread is running.\n");
    sleep(1);
    printf("Network thread has finished.\n");
    return NULL;
}

void *logging_thread(void *arg)
{
    printf("Logging thread is running.\n");
    sleep(1);
    printf("Logging thread has finished.\n");
    return NULL;
}

void *computation_thread(void *arg)
{
    printf("Computation thread is running.\n");
    sleep(1);
    printf("Computation thread has finished.\n");
    return NULL;
}

int main()
{
    pthread_t threads[5];
    pthread_create(&threads[0], NULL, file_system_thread, NULL);
    pthread_create(&threads[1], NULL, printing_thread, NULL);
    pthread_create(&threads[2], NULL, network_thread, NULL);
    pthread_create(&threads[3], NULL, logging_thread, NULL);
    pthread_create(&threads[4], NULL, computation_thread, NULL);
    for (int i = 0; i < 5; i++)
    {
        pthread_join(threads[i], NULL);
    }
    printf("All threads have completed their tasks.\n");
    return 0;
}