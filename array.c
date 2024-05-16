#include <stdio.h>
/* int main (){
	int i;
	int age [] = {18, 19, 20, 21, 17};
	for (i=0; i<5; i++){
		printf("%d \n",age [i]);
		
	}
	
	return 0;
}

*/

//ASKING THE USER
 
int main(){
	int i,n;
	float gpa[20];
	printf("How many inputs?");
	scanf("%d \n", &n);
	printf("Enter those values \n");
	for (i=0; i<n; i++)
	{
		scanf("%f", &gpa[i]);
	}
	printf("Displaying those values\n");

	for (i=0; i<n; i++){
		printf("%.2f \n",gpa[i]);
}
return 0;
}


