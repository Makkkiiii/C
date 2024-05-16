#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int i, n,fact=1;
	printf("Enter the number to find the factorial: ");
	scanf("%d",&n);
	i=1;
		do {
		fact = fact * i;
		i++;
	}
	while(i<=n);
	printf("The factorial is: %d ", fact);

	return 0;
}

