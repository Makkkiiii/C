#include <stdio.h>
// FUNCTION WITH ARGUMENT AND RETURN TYPE TO CALCULATE SIMPLE INTEREST

int simpleInterest(int p, int r, int t)
{
    return (p * r * t) / 100;
}

int main()
{
    int p, r, t, i;

    printf("Enter principal : ");
    scanf("%d", &p);

    printf("Enter rate: ");
    scanf("%d", &r);

    printf("Enter time: ");
    scanf("%d", &t);

    i = simpleInterest(p, r, t);

    printf("The simple interest is: %d", i);

    return 0;
}