// FUNCTION TO CALCULATE AREA OF CIRCLE WITHOUT ARGUMENT AND WITH RETURN TYPE
#include <stdio.h>
float areaOfCircle()
{
    float r, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    return area;
}
int main()
{
    float area = areaOfCircle();
    printf("The area of circle is: %.2f", area);
    return 0;
}
