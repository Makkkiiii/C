#include <stdio.h>

int main()
{
    int data[100], size, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - i - 1; ++j)
        {
            if (data[j] < data[j + 1])
            {

                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array in Descending Order:\n");
    for (i = 0; i < size; ++i)
    {
        printf("%d  ", data[i]);
    }

    return 0;
}