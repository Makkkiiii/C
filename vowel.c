#include <stdio.h>
//DENISH MAHARJAN
int main(){
	char ch;
	printf("Enter the alphabet: ");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
	{
		printf("The given alphabet is vowel");
	}
	else {
		printf("The given alphabet is consonant");
	}
	return 0;

}

