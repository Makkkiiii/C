#include <stdio.h>
int main(){
	int matrix1[10][10], matrix2[10][10], matrix3[10][10];
	int i, j , sum = 0, r1, c2, r2, c2,k;
	printf("Enter no. of rows and columns of Matrix1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter no. of rows and columns of Matrix1: ");
    scanf("%d %d", &r2, &c2);
    
    if(r2==c1)
    {
    	printf("\n Enter the Elements of matrix: ");
    	
    	for(i=0; i<r1; i++)
    	{
    		for(j=0;j<c; j++)
    		{
    			printf("Enter matrix1 [%d][%d] element: ", i,j);
    			scanf("%d", &matrix1[i][j]);
			}
		}
		printf("Enter the elements of Matrix 2\n");
		for (i=0; i<r2; i++)
		{
			for (j=0; j<c2; j++)
			{
				printf("Enter the matrix2 [%d][%d] element", i, j);
				scanf("%d", &matrix2[i][j]);
			}
			
		}
		
		printf("\n The matrix is \n");
		for (i=0; i<r; i++)
		{
			for (j=0;j<c1;j++)
			{
				printf("%d\t",matrix1[i][j]);
			}
			printf("\n");
		}
		printf(" \n The Matrix 2 is \n");
		for (i=0; i<r2; i++)
		{
			for (j=0; j<c2; j++)
			{
				printf("%d\t", matrix2[i][j]);
				
			}
			printf("\n");
		}
		for (i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++ )
			{
				matrix3[i][j]=0;
				for(k=0; k<c1; k++)
				{
					matrix3[i][j]+= matrix1[i][j]+matrix2[k][j]
				}
			}
		}
		
	}
    
	return 0;
}
