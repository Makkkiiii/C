// WAP to copy a string with and without using built-in function.
#include <stdio.h>
int main()
{
    char a[100];
    char b[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", a);

    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    printf("Copied String: %s\n", b);

    return 0;
}
