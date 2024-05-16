#include <stdio.h>
//DENISH MAHARJAN
int main() {
    int i, n,j,fact;

    printf("Enter the number to find factorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = 1;
        for ( j = 1; j <= i; j++) {
            fact= j*fact;
        }
        printf("The factorial of %d is: %d\n", i, fact);
    }

    return 0;
}

