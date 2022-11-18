//The program that finds the number is prime or not.

#include <stdio.h>
void isprime(int N)
{
	int i,counter=0;
	for(i=2;i<N;i++){
		if(N%i==0)
			counter++;
	}
	if(counter==0)
		printf("prime");
	else
		printf("not prime");
}
int main(){
	int N;
	printf("enter N:");
	scanf("%d",&N);
	isprime(N);
}
