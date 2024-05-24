// FUNCTION TO CHECK WHETHER NUMBER IS PALINDROME OR NOT WITHOUT ARGUMENT AND WITHOUT RETURN TYPE
#include <stdio.h>
int checkPalindrome()
{
    int n, rev = 0, rem, ori;
    printf("Enter an integer: ");
    scanf("%d", &n);
    ori = n;
    while (n != 0)
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
int main()
{
    checkPalindrome();
    return 0;
}