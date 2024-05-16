#include <stdio.h>
int main (){
	int a[2][3] = {{5,2,3}, {1,5,7}};
	int i, j, min, max;
	min=a[0][0];
	max=a[0][0];
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] < min) {
                min = a[i][j]; 
            }
            if (a[i][j] > max) {
                max = a[i][j]; 
            }
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
	
