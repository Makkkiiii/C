#include <stdio.h>
//DENISH MAHARJAN
int main(){
	char a;
	printf("Enter the value:  ");
	scanf("%c",&a);
	
	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("'%c' is alphabet.", a);
    }
    else if(a >= '0' && a <= '9')
    {
        printf("'%c' is digit.", a);
    }
    else 
    {
        printf("'%c' is other character.", a);
    }
	return 0;
}

