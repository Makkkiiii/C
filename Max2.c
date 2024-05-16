#include <stdio.h>
//DENISH MAHARJAN
int main() {
int ch1,ch2;
printf("Enter 1 for ROCK, 2 for SCISSOR and 3 for PAPER \n");
printf("Enter choice of first user: ");
scanf("%d",&ch1);
printf("Enter choice of first user: ");
scanf("%d",&ch2);

if (ch1==ch2){
	printf("DRAW");
}
else if ((ch1==1 && ch2==2)|| (ch1==3 && ch2==1)||(ch1==2 && ch2==3))
{
	printf("Player 1 WINS");
}
else{
	printf("Player 2 WINS");
}


    return 0;
}

