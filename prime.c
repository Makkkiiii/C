#include <stdio.h>
// DENISH MAHARJAN
int main()
{
  int n, i, flag = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
    flag = 1;
  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("Prime number.", n);
  else
    printf(" Not a prime number.", n);
  return 0;
}
