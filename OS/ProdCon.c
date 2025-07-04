// ! Producer Consumer Problem Solution Using Semaphores

#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>

#define MaxItems 5
#define BufferSize 5

sem_t empty;
sem_t full;
int in = 0, out = 0;
int buffer[BufferSize];
pthread_mutex_t mutex;

void *producer(void *pno)
{
    int item;
    for (int i = 0; i < MaxItems; i++)
    {
        item = 'A' + (i % 3); // Produce letters A, B, C cyclically
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer[in] = item;
        printf("Producer %d: Inserted item %c at %d\n", *(int *)pno, buffer[in], in);
        in = (in + 1) % BufferSize;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
    }
}

void *consumer(void *cno)
{
    for (int i = 0; i < MaxItems; i++)
    {
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        int item = buffer[out];
        printf("Consumer %d: Removed item %c from %d\n", *(int *)cno, item, out);
        out = (out + 1) % BufferSize;
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
    }
}

int main()
{
    pthread_t pro[5], con[5];
    pthread_mutex_init(&mutex, NULL);
    sem_init(&empty, 0, BufferSize);
    sem_init(&full, 0, 0);

    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        pthread_create(&pro[i], NULL, (void *)producer, (void *)&a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_create(&con[i], NULL, (void *)consumer, (void *)&a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_join(pro[i], NULL);
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_join(con[i], NULL);
    }

    printf("\n=========================\n");
    printf("All processes completed!\n");
    if (in == out)
    {
        printf("Buffer is empty\n");
    }
    else
    {
        printf("Buffer is not empty\n");
    }
    printf("=========================\n");

    pthread_mutex_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}