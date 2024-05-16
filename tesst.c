#include <stdio.h>
// DENISH MAHARJAN
int main()
{
    int n, sum = 0, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; n > 0; n /= 10)
    {
        m = n % 10;
        sum = sum + m;
    }

    printf("Sum is = %d", sum);

    return 0;
}
