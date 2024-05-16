#include <stdio.h>

int main()
{
    char ch;
    int numCount = 0;

    while (1)
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        if (ch == 'e' || ch == 'E')
        {
            printf("End of Program\n");
            break;
        }

        if (ch >= '0' && ch <= '9')
        {
            numCount++;
        }
    }

    printf("Total numeric characters entered: %d\n", numCount);

    return 0;
}
