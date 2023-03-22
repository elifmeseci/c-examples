//The program that searches a text in a text
#include <stdio.h>
#include <stdlib.h>
int main(){
	char string[100], str[100];
	int i=0,j=0, control=0;
 
	printf("Enter a text:");
	gets(string);
	printf("EnTer a text to search :");
	gets(str);
	while(string[i] != '\0'){
		j=0;
		if(string[i] == str[j] ){
			while(string[i+j] == str[j] )
				j++;
			if(str[j] == '\0')
				control = 1;
		}
		if(control) break;
		i++;
	}
	if(control)
		printf("The searched text is included in the text.");
	else
		printf("The searched text, is not included in the text.");
	return 0;
} 
