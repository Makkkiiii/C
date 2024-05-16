#include <stdio.h>
#include <math.h>
//DENISH MAHARJAN
int main (){
	int a, num,rem, sum=0;
	int count = 0;
	printf("Enter value of number: ");
	scanf("%d",&num);
	a=num;
	 while(num>0)
	{
		num = num/10;
		count++;		
	}	
	num=a;
	while(num > 0)
	{
		rem = num%10;
		sum = sum + pow(rem,count);
		num = num/10;
	}
	if(a==sum){
		printf("Armstrong");
	}
	else {
		printf("Not Armstrong");
	}
	return 0;
}


