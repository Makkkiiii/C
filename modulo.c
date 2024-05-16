#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the number: ");
	scanf("%d", &a);
	printf("Enter the number: ");
	scanf("%d", &b);
	c= a % b;
	printf("Mod = %d", c);
	return 0;
}
