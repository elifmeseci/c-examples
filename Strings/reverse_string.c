#include <stdio.h>

int main(void){
	char s[40], temp;
	int i, n;
	
	printf("Enter a text : ");
	gets(s);
	
	/* To arrive last char*/
	for(n=0; s[n] != '\0'; n++);
	
	for(i=0; i<n/2; i++){
		temp = s[n-i-1];
		s[n-i-1] = s[i];
		s[i] = temp;
	} 
	
	//strrev(s);
	printf("Reverse of the text : %s\n",s);
	return 0;
}

