//21.Write C code to find first and last digit of a number.

#include <stdio.h>

int main(){
	int N;
	int a,b;
	printf("enter N:");
	scanf("%d", &N);
	a= N%10;
	while(N>9){
		N=N/10;
	}
	b= N%10;
	printf("first digit is %d\n", b);
	printf("last digit is %d", a);
}
