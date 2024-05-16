#include <stdio.h>
//DENISH MAHARJAN
int main(){
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	if (marks>80)
	{
		printf("Distinction");
	}
	
	else if (marks>60 && marks<79)
	{
		printf("First Division");
	}
	
	else if (marks>45 && marks<60)
	{
		printf("Second Division");
	}
	else if(marks>32 && marks<45){
		printf("Third Division");
	}
	else {
		printf("Fail");
	}
	
	return 0;
}

