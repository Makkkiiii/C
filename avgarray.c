#include <stdio.h>

int main() {
    int a[] = {2, 6, 7, 9, 12, 14, 5, 7, 8, 6};
    int i;
    float sum = 0, average;
    int count = 0;
    for (i = 0; i < 10; i++)
	 {
        if (a[i] % 2 == 0) { 
            sum = sum + a[i]; 
            count++; 
        }
    }

    if (count > 0) {
        average =sum / count; 
        printf("Sum of even numbers: %.2f\n", sum);
        printf("Average of even numbers: %.2f\n", average);
    } else {
        printf("No even numbers\n");
    }

    return 0;
}

