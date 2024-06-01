#include <stdio.h>
int main()

{
    int a = 10;
    int *p;
    p = &a;
    printf("\n Address pointed by p is %u", p);
    printf("\n New address pointed by p is %u", p + 2);
    return 0;
}