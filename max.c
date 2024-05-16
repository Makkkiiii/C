//Denish Maharjan
#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter the Number (a): ");
	scanf("%d", &a);
	
		printf("Enter the Number (b): ");
	scanf("%d", &b);
	
		printf("Enter the Number (c): ");
	scanf("%d", &c);
	
	if (a>b && a>c){
		printf("A is the greatest");
		
	}
	else if (b>a && b>c){
		printf("B is the greatest");
	}
	else
	{
		printf("C is the greatest");
		
	}
	return 0;
}

