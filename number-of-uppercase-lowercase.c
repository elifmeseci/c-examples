//The program that finds the number of upper-case and lower-case letters in a string.
#include <stdio.h>
#include <stdlib.h>
  
int main(){
	int i=0,l=0,u=0;
	char s[100];
	
	printf ( "Enter a string:" ) ;
    gets (s) ;
    
	while(s[i]!='\0'){
		
		if(s[i] >= 'a' && s[i] <= 'z')
			l++;
		if(s[i] >= 'A' && s[i] <= 'Z')
			u++;
		i++;
	}
    printf("In the string,\nnumber of lower-case: %d,\nnumber of upper-case :%d", l, u);
}
