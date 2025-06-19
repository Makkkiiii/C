#include <stdio.h>

int main()
{
    int blockSize[10], processSize[10], blockCount, processCount;
    int allocation[10];

    printf("Enter number of memory blocks: ");
    scanf("%d", &blockCount);
    for (int i = 0; i < blockCount; i++)
    {
        printf("Enter size of block %d: ", i + 1);
        scanf("%d", &blockSize[i]);
    }

    printf("\nEnter number of processes: ");
    scanf("%d", &processCount);
    for (int i = 0; i < processCount; i++)
    {
        printf("Enter size of process %d: ", i + 1);
        scanf("%d", &processSize[i]);
        allocation[i] = -1;
    }

    for (int i = 0; i < processCount; i++)
    {
        int worstIdx = -1;
        for (int j = 0; j < blockCount; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                if (worstIdx == -1 || blockSize[j] > blockSize[worstIdx])
                {
                    worstIdx = j;
                }
            }
        }

        if (worstIdx != -1)
        {
            allocation[i] = worstIdx;
            blockSize[worstIdx] -= processSize[i];
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock Allocated\n");
    for (int i = 0; i < processCount; i++)
    {
        printf("%d\t\t%d\t\t", i + 1, processSize[i]);
        if (allocation[i] != -1)
            printf("%d\n", allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }
    return 0;
}