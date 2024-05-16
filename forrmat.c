#include <stdio.h>
int main()
{
	char name[10], name1[10], name2[10];
	int age, age1, age2;
	float gpa, gpa1, gpa2;
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your gpa: ");
	scanf("%f", &gpa);

	printf("Enter your name: ");
	scanf("%s", &name1);
	printf("Enter your age: ");
	scanf("%d", &age1);
	printf("Enter your gpa: ");
	scanf("%f", &gpa1);

	printf("Enter your name: ");
	scanf("%s", &name2);
	printf("Enter your age: ");
	scanf("%d", &age2);
	printf("Enter your gpa: ");
	scanf("%f", &gpa2);

	printf("Name  \tAge  \tGPA ");
	printf("\n-------------------------------");
	printf("\n%s \t%d \t%.2f", name, age, gpa);
	printf("\n%s \t%d \t%.2f", name1, age1, gpa1);
	printf("\n%s \t%d \t%.2f", name2, age2, gpa2);

	return 0;
}
