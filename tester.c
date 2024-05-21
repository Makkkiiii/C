#include <stdio.h>

int main()
{
    int i, j, n = 3; // n is the number of rows in the upper half of the pattern

    // Print the upper half of the pattern
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            printf("  ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("* ");
        printf("\n");
    }

    // Print the lower half of the pattern
    for (i = n - 2; i >= 0; i--)
    {
        for (j = 0; j < n - i; j++)
            printf("  ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}