#include <stdio.h>
int main()
{
    int n, rev = 0, rem, ori;
    printf("Enter an integer: ");
    scanf("%d", &n);
    ori = n;
    for (; n > 0;)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (ori == rev)
        printf("%d is a palindrome.", ori);
    else
        printf("%d is not a palindrome.", ori);

    return 0;
}
