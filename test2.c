#include <stdio.h>
void main()
{
	// Program to find simple interest
	float p, t, r, si;
	printf("Enter the Value of P = ");
	scanf("%f", &p);
	printf("Enter the Value of T = ");
	scanf("%f", &t);
	printf("Enter the Value of R = ");
	scanf("%f", &r);
	si = p * t * r / 100;
	printf("The simple interest is = %.2f ", si);
}
