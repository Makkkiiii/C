#include <stdio.h>

int main() {
    int a[] = {7,6,11,19,12,14,15,7,8,6};
	int i, count = 0,j;
	int sum  = 0;
	/*
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    */
    
    printf("\nThe array elements are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
 
    for (j=1; j<=a[j]; j++)
    {
    	count = 0;
    	for (i=1; i<=a[j]; i++){
    		if (a[j]%i==0)
    		count++;
		}
    	
	
	if (count==2)
	{
		printf("\n%d is Prime number", a[j]);
		sum= sum + a[j];
		
	}
}
printf("\nSum of prime number is : %d", sum);

    return 0;
}

    
    
