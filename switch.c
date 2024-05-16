#include <stdio.h>
#define pi 3.14
// DENISH MAHARJAN
int main()
{
	int choice, radius, area1, l, b, area2, area3;
	printf("Program to calculate Area \n");
	printf("1. Circle 2. Square 3. Rectangle \n ");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Enter the radius: ");
		scanf("%d", &radius);
		area1 = pi * radius * radius;
		printf("Area of circle is %d", area1);
		break;

	case 2:
		printf("Enter the length: ");
		scanf("%d", &l);
		printf("Enter the breadth: ");
		scanf("%d", &b);
		area1 = l * b;
		printf("Area of square is %d", area2);
		break;

	case 3:
		printf("Enter the length: ");
		scanf("%d", &l);
		area3 = l * l;
		printf("Area of rectangle is %d", area3);
		break;
	}
	return 0;
}
