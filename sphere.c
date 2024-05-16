#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
	int r, x, vol;
	printf("Enter the Radius: ");
	scanf("%d", &r);
	x = pow(r, 3);
	vol = 4 / 3 * pi * x;
	printf("The volume is = %d", vol);
	return 0;
}
