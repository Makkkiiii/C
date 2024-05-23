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

/*
Function without argument and without return type
#include <stdio.h>
void addition()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum is %d\n", sum);
}
int main()
{
    addition();
    return 0;
}

*/

/*
Function without argument and with return type
#include <stdio.h>
int addition()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    return sum;
}
int main()
{
    int c;
    c = addition();
    printf("\n Sum is %d",c);
    return 0;
}
*/