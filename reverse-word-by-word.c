#include <stdio.h> 
#include <stdlib.h>

int countChar(char str[]){
	int i;
	while(str[i] != '\0')
		i++;
	return i;
}

int spacePosition(char str[], int startPosition){
	while(str[startPosition] != ' ' && startPosition != 0){
		startPosition--;
	}
	return startPosition;
}
int main(){
	int i, Position, beginning, ending;
	char s[100];
	
	printf("Enter a string\n");
	gets(s);
	
	Position = countChar(s);
	ending = Position;
	
	while( Position > 0){
		beginning = spacePosition(s, Position);
		Position = beginning -1;
		if(beginning > 0)
			beginning ++;
		for(i=beginning; i<ending; i++)
			printf("%c", s[i]);
		printf(" ");
		ending = Position+1;
	}
	return 0;
}
