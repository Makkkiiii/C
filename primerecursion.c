#include <stdio.h>

int isPrime(int n, int i)
{
<<<<<<< HEAD
    if (i == 1)
        return 1;
    else if (n % i == 0)
        return 0;
    else
        return isPrime(n, i - 1);
=======
    if (n < 2)
        return 0;
    else if (i == 1)
        return 1;
    else if (n % i == 0)
        return 0;

    return isPrime(n, i - 1);
>>>>>>> 9925e1900c790acfe52d9858b7ed6a6dff244101
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num, num / 2))
    {
        printf("Prime number", num);
    }
    else
    {
        printf("Not prime number", num);
    }
    return 0;
}