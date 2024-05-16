// STRING FUNCTION
#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "JHILKE";
    char name2[] = "bahadur";
    // int length;
    // length = strlen(name); (To find the length)
    // strcpy(name2, name); (To copy one to another)
    strcat(name2, name); //(To compare)
    printf("After copying name 2 is '%s' ", name);
    return 0;
}