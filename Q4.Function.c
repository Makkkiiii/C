// Function to calculate sum of n natural number with argument and return type
#include <stdio.h>
int naturalsum(int n)
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
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