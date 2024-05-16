#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter your elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Your matrix is:\n");
    for (j = 0; j < c; j++)
    {
        for (i = 0; i < r; i++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
