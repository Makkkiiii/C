#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Denish";
    int length = strlen(str);
    int i, j;

    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }

        printf("\n");
    }

    return 0;
}
