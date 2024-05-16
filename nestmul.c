#include <stdio.h>

int main() {
    int j, i,a,b,num,mul;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    for (i=1;i<=10;i++)
    {
    	for (j=1;j<=num;j++){
    		mul = j*i;
    		printf("\t%d*%d=%d",j,i,mul);
		}
		printf("\n");
		
	}
	
	return 0;
}

