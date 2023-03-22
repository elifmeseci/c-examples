#include <stdio.h>
#include <string.h>

int main(){
	char line[100];
	int i,j, vowels=0, constonants=0;
	
	printf("enter a sentence:");
	gets(line);
	for(i=0; line[i]!= '\0'; i++){
		if(line[i]=='a'||line[i]=='e'||line[i]=='o'||line[i]=='u'){
			vowels++;
		}
		else
			constonants++;
	}
	printf("number of vowels in %s: %d\n ", line,vowels);
	printf("number of constonants in %s: %d\n ", line,constonants);
}
