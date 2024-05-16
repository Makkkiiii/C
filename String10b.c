#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "DENISH";
    int length = strlen(str);
    int i, j;

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
