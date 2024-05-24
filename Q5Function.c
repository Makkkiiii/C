// Function with argument and no return type to calculate total distance travelled by a vehicle
#include <stdio.h>
void totaldistance(float u, float a, float t)
{
    float distance = u * t + a * t * t / 2;
    printf("The total distance travelled by the vehicle is: %.2f", distance);
}
int main()
{
    float u, a, t;
    printf("Enter initial velocity, acceleration and time: ");
    scanf("%f %f %f", &u, &a, &t);
    totaldistance(u, a, t);
    return 0;
}