#include <stdio.h>
// DENISH MAHARJAN
int main()
{
	int a, b, osum = 0, esum = 0, i;
	printf("Enter the 1st value: ");
	scanf("%d", &a);
	printf("Enter the 2nd value: ");
	scanf("%d", &b);

	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			esum = esum + i;
		}
		else
		{
			osum = osum + 1;
		}
	}
	printf("The sum of even number is: %d \n", esum);
	printf("The sum of odd number is: %d \n", osum);
	return 0;
}
