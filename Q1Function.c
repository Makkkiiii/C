#include <stdio.h>
// FUNCTION WITHOUR ARGUMENT AND WITHOUT RETURN TYPE TO FIND THE SQUARE OF ANY NUMBER
void square()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The square of %d is %d\n", a, a * a);
}
int main()
{
    square();
    return 0;
}
