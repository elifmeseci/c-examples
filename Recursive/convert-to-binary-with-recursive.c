#include <stdio.h>

int binary(int N){
	int sum;
	if(N==0)
		return 0;
	else
		return (N%2+10*binary(N/2));
}
int main(){
	int number;
	printf("enter a number:");
	scanf("\n%d",&number);
	printf("%d", binary(number));
}
