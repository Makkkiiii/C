#include <stdio.h>
// FUNCTION TO CHECK PRIME NUMBER WITHOUT RETURN TYPE AND WITH ARGUMENT
void ifprime(int a)
{
    int n, i, count = 0;
    n = a;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            count++;
        }
    }
    if (count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    ifprime(a);
    return 0;
}