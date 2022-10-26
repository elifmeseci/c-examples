#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//recursive func that check a str[s....e] is palindrome or not
bool isPalRec(char str[], int s,int e){
	//if there is only one character
	if(s==e)
		return true;
	
	//if first and last character dont match
	if(str[s]!= str[e])
		return false;
	
	//if there are more than two charecters check midle substring is also polindrome or not
	if (s < e+1)
		return isPalRec(str,s+1, e-1);
	return true;
}
int main(){
	char str[20];
	printf("enter a string:");
	gets(str);
	int n = strlen(str);
	if(isPalRec(str,0,n-1))
		printf("Its palindrome");
	else
		printf("Its not palindrome");
}

