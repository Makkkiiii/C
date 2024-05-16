// WAP to take a string as input, and determine the length of the string with and without string handling function.
#include <stdio.h>

int main()
{
    char a[100];
    int length = 0;

    printf("Enter a string:");
    scanf("%s", &a);

    if (a[length] == '\n')
    {
        a[length] = '\0';
    }

    while (a[length] != '\0')
    {
        length++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
