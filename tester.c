#include <stdio.h>

int main()
{
    int data[100], size, i, original, remainder, sum;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < size; i++)
    {
        original = data[i];
        sum = 0;

        while (original != 0)
        {
            remainder = original % 10;
            sum += remainder * remainder * remainder;
            original /= 10;
        }

        if (data[i] == sum)
        {
            printf("%d is an Armstrong number\n", data[i]);
        }
        else
        {
            printf("%d is not an Armstrong number\n", data[i]);
        }
    }

    return 0;
}