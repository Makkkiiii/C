#include <stdio.h>
int main()
{
  int a[5][5];
  int b[5][5];
  int i, j, r, c, sum = 0;
  printf("enter the row and column ");
  scanf("%d%d", &r, &c);
  printf("enter your elements \n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter the element of second matrix \n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%d \t \n", a[i][j] + b[i][j]);
    }
    printf("\n");
  }

  return 0;
}
