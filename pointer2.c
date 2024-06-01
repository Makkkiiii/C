#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    int **q;
    q = &p;
    p = &a;

    printf("\n Value of a is %d", a);
    printf("\n Value of a is %d", *p);
    printf("\n Value of a is %d", **q);

    printf("\n Address of a is %x", &a);
    printf("\n Address of a is %d", p);
    printf("\n Address of a is %d", *q);

    printf("\n Address of p is %x", &p);
    printf("\n Address of p is %x", p);
    printf("\n Address of p is %x", &q);

    return 0;
}