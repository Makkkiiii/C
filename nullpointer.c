#include <stdio.h>
int main()
{
    int a[] = {5, 2, 1, 4, 3};
    int *p;
    p = &a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(p + i));
    }

    return 0;
}