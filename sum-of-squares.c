#include <stdio.h>
#include <math.h>

int main(){
	int N ,a;
	int i;
	printf("enter N:");
	scanf("%d", &N);
	

	for(i=1; i<N; i++){
		a=sqrt(N-i*i);
		if((N-i*i)/a==a){
			printf("number is sum of square of two number: ");
			printf("%d %d\n", i, a);		
		}
		else
			printf("This number is not sum of square of two numbers.");
	}
}

