#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int a, i , sum=0;
	printf("Enter a positive number: ");
	scanf("%d",&a);
	printf("The factors are: \n",a);	
	for(i=1; i<=a; i++)
	{
		if(a%i==0){
			printf("%d \n",i);
				sum += i;
		}		
	}
	printf("The sum of the positive factors are: %d", sum);	
	return 0;
	}
	
	
