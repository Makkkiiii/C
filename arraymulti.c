#include <stdio.h>
// MULTIPLYING 2 MATRIX USING ARRAY
//  DENISH MAHARJAN
int main()
{
    int matrix1[10][10], matrix2[10][10], matrix3[10][10];
    int i, j, k, r1, c1, r2, c2;

    printf("Enter the size of matrix1 :\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter the size of matrix2 :\n");
    scanf("%d%d", &r2, &c2);

    if (c1 == r2)
    {
        printf("Enter the elements of Matrix 1:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("\nEnter matrix1[%d][%d] element: ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("\nEnter the elements of Matrix 2:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("\nEnter matrix2[%d][%d] element: ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("\nMatrix 1:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("\nMatrix 2:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", matrix2[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                matrix3[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        printf("\nThe Resultant Matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", matrix3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Multiplication not possible\n");
    }

    return 0;
}
