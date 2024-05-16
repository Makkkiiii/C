#include <stdio.h>
int main()
{
	int i,j,k;
    for (i = 0; i < 5; i++) {
        for (j=1;j<=8-i;j++) {
            printf(" ");
        }
        for (k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
