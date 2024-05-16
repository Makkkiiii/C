//Denish Maharjan
#include <stdio.h>
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	if (a>0)
	{
		printf("It is positive");
	}
	else if(a<0) 
	{
		printf("It is negative");
	}
	else
	{
		printf("It is a zero");
	}
	return 0;
}

