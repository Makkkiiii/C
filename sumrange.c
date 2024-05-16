#include <stdio.h>
// DENISH MAHARJAN
int main()
{
	int a, b, i, sum = 0;
	printf("Enter the 1st number: ");
	scanf("%d", &a);
	printf("Enter the 2nd number: ");
	scanf("%d", &b);
	for (i = a; i <= b; i++)
	{
		sum = sum + i;
	}

	printf("The sum for the range is: %d", sum);
	return 0;
}
