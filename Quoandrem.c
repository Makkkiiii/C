#include <stdio.h>
int main()
{
	int a, b, quo, rem;
	printf("Enter the Value of a: ");
	scanf("%d", &a);
	printf("Enter the Value of b: ");
	scanf("%d", &b);

	quo = a / b;
	rem = a % b;

	printf("The quotient is = %d", quo);
	printf("\nThe remainder is = %d", rem);

	return 0;
}
