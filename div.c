#include <stdio.h>
int main(){
	int a;
	printf("Enter the Number (a): ");
	scanf("%d", &a);
	if (a%5==0 && a%11==0){
		printf("The number is divisible by both 5 and 11");
}
	else
	{
		printf("Not Divisible");
		
	}
	return 0;
}
