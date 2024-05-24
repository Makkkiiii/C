#include <stdio.h>
#define pi 3.14
float areaOfCircle()
{
    float r, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    area = pi * r * r;
    return area;
}
float areaofRectangle()
{
    float l, b, area;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);
    area = l * b;
    return area;
}

int main()
{
    int choice;
    float area;
    printf("Enter 1 for area of circle and 2 for area of rectangle: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        area = areaOfCircle();
        printf("The area of circle is: %.2f", area);
    }
    else
    {
        area = areaofRectangle();
        printf("The area of rectangle is: %.2f", area);
    }
    return 0;
}