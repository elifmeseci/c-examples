//program finds prime numbers between two numbers that entered by user.
#include <stdio.h>

int prime(int A,int B){
	int i,j, kontrol=0;
	for(i=A; i<B; i++){
		kontrol=0;
		for(j=2; j<i; j++){
			if(i%j ==0)
				kontrol++;	
		}
		if(kontrol==0)
			printf("%d\n", i);
	}
	
}

int main(){
	int x,y;
	printf("enter two number: ");
	scanf("%d%d", &x, &y);
	printf("%d", prime(x,y));
}
