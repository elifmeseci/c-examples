#include <stdio.h>

int exp(int e,int b){
	int i=0 ;
	if(i<e){
		i++;
		return exp(e-1,b)*b;	
	}	
	else{
		return 1;
	}
		
}
int main(){
	int exponent,base;
	printf("enter your exponent and base number: \n");
	scanf("%d%d", &exponent, &base);
	
	printf("answer is : %d", exp(exponent,base));
}
