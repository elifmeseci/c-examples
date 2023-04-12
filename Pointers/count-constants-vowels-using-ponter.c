#include <stdio.h>
// Pointer : Count the number of vowels and consonants

int main()
{
    char str[100];
    char *pt;
    int ctrV=0, ctrC=0;
    
    printf("Enter a text:");
    gets(str);
    pt = str;
    
    while(*pt != '\0'){
    	
    	if( *pt =='A' || *pt =='E' || *pt =='I' || *pt =='O' || *pt =='U' || *pt =='a' || *pt =='e' || *pt =='i' || *pt =='o' || *pt =='u' )
    		ctrV ++;
    	else if(*pt != ' ')
    		ctrC++;
    	pt++;
	}
	
	printf("Number of vowels: %d", ctrV);
	printf("Number of constants: %d", ctrC);
	return 0;
    
}
