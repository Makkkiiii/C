// WAP to take a string as input; reverse it and display the output.
#include <stdio.h>
#include <string.h>
int main()
{
    // USING STRING FUNCTION
    /*char a[50];
     printf("Enter the string: ");
     scanf("%s", &a);
     strrev(a);
     printf("Reversed string is: %s ", a);
     */

    // WITHOUT USING STRING FUNCTION
    char a[100];
    int length = 0, i, temp;
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

    // TO REVERSE
    for (i = 0; i < length / 2; i++)
    {
        temp = a[i];
        a[i] = a[length - 1 - i];
        a[length - 1 - i] = temp;
        return 0;
    }
    printf("Reversed String is: %s", a);
}