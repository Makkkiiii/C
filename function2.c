#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int c, d, add;
    printf("Enter two numbers: ");
    scanf("%d%d", &c, &d);
    add = sum(c, d);

    printf("Sum is %d", add);

    return 0;
}