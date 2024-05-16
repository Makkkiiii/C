#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Denish";
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
