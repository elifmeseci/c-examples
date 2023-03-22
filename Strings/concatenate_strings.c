#include <stdio.h>
#include <stdlib.h>
int main() {
	
	char s1[100], s2[100];
  	int n, i;

	printf("First string : ");
	gets(s1);
	printf("Second string : ");
	gets(s2);
	
	for(n=0; s1[n] != '\0'; n++);
	
	for(i=0; s2[i] != '\0'; i++){
		s1[n] = s2[i];
	} 
	s1[n] = '\n';
  
  	//strcat(s1, s2);
	printf("%s", s1);
	

  	return 0;
}
