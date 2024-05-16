#include <stdio.h>
int main()
{
	int n, sum = 0, i = 1;
	printf("Enter the natural number: ");
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("The sum of natural number is: %d", sum);
	return 0;
}
