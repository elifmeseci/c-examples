//program finds prime numbers between two numbers that entered by user.
#include <stdio.h>

int prime(int A,int B){
	int i,j, control=0;
	for(i=A; i<B; i++){
		control=0;
		for(j=2; j<i; j++){
			if(i%j ==0)
				control++;	
		}
		if(control==0)
			printf("%d\n", i);
	}
	
}

int main(){
	int x,y;
	printf("enter two number: ");
	scanf("%d%d", &x, &y);
	printf("%d", prime(x,y));
}
