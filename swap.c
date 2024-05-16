#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the two Numbers a and b ");
	scanf("%d"
		  "%d",
		  &a, &b);
	printf("The first number is %d and second number is  %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nThe first number is %d and second number is  %d", a, b);
	return 0;
}
