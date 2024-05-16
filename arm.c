#include <stdio.h>
//DENISH MAHARJAN
int main (){
	int a, num,rem, sum=0;
	printf("Enter value of number: ");
	scanf("%d",&num);
	a=num;
	while(num!=0)
	{
		rem = num%10;
		sum = sum + rem * rem * rem;
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

