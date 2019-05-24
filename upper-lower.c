#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int i;
	printf("enter sentence: ");
	gets(str);
	
	for(i=0; i<100; i++){
		if(str[i]=='\0')
			i++;
		else if(str[i]>64&&str[i]<91)
			str[i] += 32;
		
	}
	puts(str);
	for(i=0; i<100; i++){
		if(str[i]=='\0')
			i++;
		else if(str[i]>96&&str[i]<123)
			str[i] -= 32;		
	}
	puts(str);

}
