#include <stdio.h>
#include <string.h>

int main()
{
    /*
    USING STRING FUNCTION

    char str1[100], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    */

    // wITHOUT USING STRING FUNCTION

    char str1[50], str2[25];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string is: %s\n", str1);
    return 0;
}