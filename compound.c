#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, CI;

    printf("Enter principle: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);
    CI = p * (pow((1 + r / 100), t));

    printf("Compound Interest = %.2f", CI);

    return 0;
}
