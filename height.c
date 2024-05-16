#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int height,age;
	char occu [30];
	printf("Enter your height in CM: ");
	scanf("%d",&height);
	if(height>160)
	{
		printf("Enter your Occupation: ");
		scanf("%s", &occu);
		printf("Your height is:  %d and your occupation is: %s", height, occu);		
	}
	else
	{
		if(height<160)
		{
			printf("Enter your age: ");
			scanf("%d", &age);
			printf("Your age is: %d and your height is: %d",age, height);
		}
		
		}
	return 0;
}

