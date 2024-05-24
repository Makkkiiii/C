#include <stdio.h>
// Sum of N natural number using recursion
int naturalsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + naturalsum(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = naturalsum(n);
    printf("The sum of natural numbers are: %d", sum);

    return 0;
}