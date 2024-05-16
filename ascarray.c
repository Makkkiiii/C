#include <stdio.h>
int main(){
	int i,j, temp;
	int num[] = {4,2,3,6,1,7,5,8};

	for (i=0; i<8; i++){
		for (j=0; j<7; j++){
			if (num[i] > num [j+1])
			{
				temp = num [j];
				num [j] = num[j+1];
				num [j+1] = temp;
			}
		}
	}

	printf("Sorted (ASC) Number =  %d " );
	for (i=0; i<8; i++)
	{
		printf("\t %d", num[i]);
	}
	return 0;
}

