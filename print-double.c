#include <stdio.h>
#include <stdlib.h>

int countChar(char metin[]){
	int i=0;
	while(metin[i] !='\0')
		i++;
	return i;
}
int main(){
	char s[100], new[200];
	int i=0, j=0, character;
	
	printf("Enter a string:\n");
	gets(s);
	
	character = countChar(s);
	
	for(i=0,j=0; i<character, j<2*character; i++, j++){
		new[j] = s[i];
		j++;
		new[j] = s[i];
	}
	for(j=0; j<2*character; j++)
		putchar(new[j]);
	
}
