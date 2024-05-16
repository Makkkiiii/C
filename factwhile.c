#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int i, n,fact=1;
	printf("Enter the number to find the factorial: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact = fact * i;
		i++;
	}
	printf("The factorial is: %d ", fact);
	return 0;
}

