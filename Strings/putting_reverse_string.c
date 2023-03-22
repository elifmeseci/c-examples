 /*THE PROGRAM THAT PRINTS OUT REVERS OF STRING THAT ENTERED BY USER*/
  
#include <stdio.h>
#include <stdlib.h>
  
int countChar(char string[]){
  	int i=0;
    while(string[i] != '\0')
        i++;
    return i; 
}

int main(){
	char string[100];
    int counter,
		z=0;
     
    printf("Enter a string.");
     
    gets(string);
    counter = countChar(string);
     
    for( z = counter-1 ; z >=0 ; z-- )
		putchar(string[z]);
}
