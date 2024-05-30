#include <stdio.h>
// Multiplication table using recursion
int multi(int n, int i)
{
    if (i > 10)
    {
        return 0;
    }
    printf("%d * %d = %d\n", n, i, n * i);
    multi(n, i + 1);
}
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    multi(n, i);
    return 0;
}