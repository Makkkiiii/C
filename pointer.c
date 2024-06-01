#include <stdio.h>
/*
int main()
{
    int a = 10;
    printf("\n Value of a is %d", a);
    printf("\n Address of a is %x", &a);
    return 0;
}

*/

int main()
{
    int a = 10;
    float b = 5.5;
    char ch = 'r';
    double e = 10.5;
    printf("\n Value of a is %d", a);
    printf("\n Address of a is %x", &a);
    printf("\n Size of a is %d", sizeof(a));
    printf("\n Size of b is %d", sizeof(b));
    printf("\n Size of ch is %d", sizeof(ch));
    printf("\n Size of e is %d", sizeof(e));

    return 0;
}