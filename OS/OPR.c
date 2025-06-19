#include <stdio.h>
#include <string.h>

int findOptimal(int pages[], int n, int frames[], int capacity, int currentIndex)
{
    int farthest = currentIndex, pos = -1;

    for (int i = 0; i < capacity; i++)
    {
        int j;
        for (j = currentIndex + 1; j < n; j++)
        {
            if (frames[i] == pages[j])
            {
                if (j > farthest)
                {
                    farthest = j;
                    pos = i;
                }
                break;
            }
        }

        if (j == n)
            return i;
    }

    return (pos == -1) ? 0 : pos;
}

void optimalPageReplacement(int pages[], int n, int capacity)
{
    int frames[capacity];
    int pageFaults = 0, hits = 0;
    int history[capacity][n];
    char result[n][5];

    for (int i = 0; i < capacity; i++)
        frames[i] = -1;

    for (int i = 0; i < n; i++)
    {
        int page = pages[i];
        int found = 0;

        for (int j = 0; j < capacity; j++)
        {
            if (frames[j] == page)
            {
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
                pos = findOptimal(pages, n, frames, capacity, i);

            frames[pos] = page;
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

    optimalPageReplacement(pages, n, capacity);

    return 0;
}