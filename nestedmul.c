#include <stdio.h>
int main(){
	int n, num,i;
	printf("Enter the number: ");
	scanf("%d", &num);
	for (n=1; n<=num; n++){
		printf("\t");
		for (i=1; i<=10; i++){
			printf("\n %d*%d=%d",n,i,n*i);
		}
	}
	
	return 0;
}
