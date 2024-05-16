#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int i, fact=1,a;
	printf("Enter the number to find factorial: ");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		fact =  fact*i;
	}
	printf("The factorial is: %d ",fact);
	return 0;
}

