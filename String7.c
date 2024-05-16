#include <stdio.h>
// WITHOUT USING THE STRING FUCNTIONS
int main()
{
    char name[] = "@Ne123pal456#";
    char name2[50];
    int i = 0;
    int j = 0;

    for (i = 0; name[i] != '\0'; i++)
    {
        // USING ISALPHA
        /*
        Algorithm
        if(isalpha(name[i]))
        {
            name2[j] = name[i];
            j++;
        }
        i++;
        */
        if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
        {
            name2[j] = name[i];
            j++;
        }
    }

    name2[j] = '\0';

    printf("Alphabets are: %s\n", name2);

    return 0;
}
