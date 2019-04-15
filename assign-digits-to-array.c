//The program that assigns the digits of a number which can has 5 digit maximum to an array and prints out.

#include <stdio.h>

int main(){
	int N,n,i,A[5];
	printf("enter N: ");
	scanf("%d",&n);
	N=n;
	
	for(i=0;i<5;i++){
		if(N<100000 && N>0){
			A[i]= N%10;
			N=N/10;
			printf("A[%d]: %d\n", i, A[i]);
		}
		else
			break;
	}
}
