// Fucntion with argument and no return type
#include <stdio.h>
void addition(int a, int b)
{
    int sum;
    sum = a + b;
    printf("The sum is %d\n", sum);
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    addition(x, y);

    return 0;
}