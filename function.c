#include <stdio.h>
// Function with arguments and return value
int addition(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int z = addition(x, y);
    printf("The sum of %d and %d is %d\n", x, y, z);
    return 0;
}