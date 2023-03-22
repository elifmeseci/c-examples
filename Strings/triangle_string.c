#include <stdio.h>
#include <stdlib.h>

int main(){
	char A[100];
	int i=0,k;
	
	printf("Enter a word: ");
	gets(A);
	
	while(A[i] != '\0'){
		for(k=0; k<=i; k++)
			putchar(A[k]);
		putchar('\n');
		i++;
	}
}
/*
Enter a word: string
s
st
str
stri
strin
string
*/
