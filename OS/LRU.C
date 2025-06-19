#include <stdio.h>
#include <string.h>

int findLRU(int time[], int capacity)
{
    int min = time[0], pos = 0;
    for (int i = 1; i < capacity; i++)
    {
        if (time[i] < min)
        {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

void lruPageReplacement(int pages[], int n, int capacity)
{
    int frames[capacity];
    int time[capacity];
    int counter = 0, pageFaults = 0, hits = 0;
    int history[capacity][n];
    char result[n][5];

    for (int i = 0; i < capacity; i++)
    {
        frames[i] = -1;
        time[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int page = pages[i];
        int found = 0;

        for (int j = 0; j < capacity; j++)
        {
            if (frames[j] == page)
            {
                counter++;
                time[j] = counter;
                hits++;
                found = 1;
                break;
            }
        }

        if (!found)
        {
            int pos = -1;
            for (int j = 0; j < capacity; j++)
            {
                if (frames[j] == -1)
                {
                    pos = j;
                    break;
                }
            }

            if (pos == -1)
                pos = findLRU(time, capacity);

            counter++;
            frames[pos] = page;
            time[pos] = counter;
            pageFaults++;
            strcpy(result[i], "M");
        }
        else
        {
            strcpy(result[i], "H");
        }

        for (int j = 0; j < capacity; j++)
        {
            history[j][i] = frames[j];
        }
    }

    printf("Page Reference: ");
    for (int i = 0; i < n; i++)
        printf("%d ", pages[i]);
    printf("\n\n");

    for (int i = 0; i < n; i++)
        printf("%5d", pages[i]);
    printf("\n");

    for (int i = 0; i < n; i++)
        printf("─────");
    printf("\n");

    for (int row = 0; row < capacity; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (history[row][col] != -1)
                printf("%5d", history[row][col]);
            else
                printf("     ");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
        printf("─────");
    printf("\n");

    for (int i = 0; i < n; i++)
        printf("%5s", result[i]);
    printf("\n");

    double hitRate = ((double)hits / n) * 100.0;

    printf("\nTotal Page Faults: %d\n", pageFaults);
    printf("Total Hits: %d\n", hits);
    printf("Hit Rate: %.2f%%\n", hitRate);
}

int main()
{
    int n, capacity;

    printf("Enter the number of pages: ");
    scanf("%d", &n);

    int pages[n];
    printf("Enter the page reference string: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter the number of frames: ");
    scanf("%d", &capacity);

    lruPageReplacement(pages, n, capacity);

    return 0;
}
