#include<stdio.h> 
//DENISH MAHARJAN 
 int main()    
{    
int n,sum,m;    
printf("Enter a number: ");    
scanf("%d",&n);    
while(n>9)    
{    
sum = 0; 
while (n>0)
{
	m=n%10;    
    sum=sum+m;    
    n=n/10;
}
//printf("The first sum is = %d \n",sum);

n=sum;
}   

printf("Final Sum is = %d",n);    
return 0;  
}   


