#include <stdio.h>
int main(){
	int n1=0, n2=1, n3, i,n;
	printf("Enter the range ");
	scanf("%d", &n);

	i=1;
	do{
	
		printf("%d", n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
		i++;
		
	}
	while(i<n);

	return 0;
}
