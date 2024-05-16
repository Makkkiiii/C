#include <stdio.h>
int main(){
	char name [50], occu [50];
	int age;
	float gpa;
	printf("Enter your name ");
	scanf("%s", &name);
	printf("Enter your Occupation ");
	scanf("%s", &occu);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your GPA");
	scanf("%f", &gpa);
	printf("Your name is : %s", name);
	printf("\nYour occupation is : %s", occu);
	printf("\nYour age is : %d", age);	
	printf("\nYour GPA is : %.2f",gpa);
	return 0;
}
