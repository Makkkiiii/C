#include <stdio.h>
int main(){
	int i=0;
	int num[] = {4,2,3,6,1,7,5,8};
	int n = 8;

	int min = num[0];
	for(i=1; i<n; i++)
	{
		if(num[i]<min)
		{
			min = num [i];
		}
	}
	printf("Smallest Number =  %d ", min);
	return 0;
}

