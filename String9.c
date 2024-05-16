#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter numbers (enter 0 to end): ");

    do
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            sum += num;
        }
    } while (num != 0);

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
