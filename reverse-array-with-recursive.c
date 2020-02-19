#include <stdio.h>
#include <stdlib.h>

void PrintReverse(char str[],int i)
{
	if(str[i] =='\0')
		return ;
	PrintReverse(str,i+1);
	printf("%c",str[i]);
}
int main()
{
	char str[100];
	printf("Enter a string\n"); 
	gets(str);
	PrintReverse(str,0);
	return 0;
}
