//The program that finds the number is prime or not.

#include <stdio.h>

int main(){
	int i,N,counter=0;
	printf("enter N:");
	scanf("%d",&N);
	for(i=2;i<N;i++){
		if(N%i==0)
			counter++;
	}
	if(counter==0)
		printf("prime");
	else
		printf("not prime");

}
