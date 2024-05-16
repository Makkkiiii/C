#include <stdio.h>
//DENISH MAHARJAN
int main(){
	
	int a,b, i,j ,count;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter a number: ");
	scanf("%d",&b);
	for (i=a;i<=b;i++)
	{
		count=0;
		for (j=2; j<i;j++)
		{
	if (i%j==0)
	count ++;	
	}
		if (count==0){
		printf("%d \n",i);	
	}	
	}		
	return 0;
}
