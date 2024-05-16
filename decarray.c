#include <stdio.h>

int main() {
    int a[100], i, n, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nThe array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("\nThe array in descending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}

