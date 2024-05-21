#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int data[100], size, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order:\n");
    for (i = 0; i < size; ++i)
    {
        printf("%d  ", data[i]);
    }

    return 0;
}