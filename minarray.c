#include <stdio.h>
int main(){
	int a[100], i, n, high, low;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter %d array element: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n The array elements are \n");
	for(i=0; i<n; i++)
	{
		printf("%d \t ", a[i]);
		
	}
	high = a [0];
	low = a[0];
	for (i=0; i<n; i++)
	{
		if (high < a[i])
		{
			high = a [i];
		}
		if (low > a[i])
		{
			low = a[i];
		}
	}

printf("\n Max = %d and Min = %d", high,low);
}
