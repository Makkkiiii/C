#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int a, sum=0, i;
	printf("Enter the natural number: ");
	scanf("%d", &a);
	for(i=1; i<=a;i++)
	{
		sum= sum+i;
	
	}
	printf("The sum of natural numbers are: %d", sum);
	return 0;
}

