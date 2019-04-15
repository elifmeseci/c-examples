//The program that finds the factorial and power of a number.
#include <stdio.h>

int main(){
	int  x, k,a;
	int i=0, f=1 ,pow=1;
	float result;
	
	printf("enter x for factorial:  ");
	scanf("%d", &x);
	a=x;
	while(a!=0){
		f=f*a;
		a--;
	}
	printf("factorial : %d\n", f);
	printf("enter k for pow:  ");
	scanf("%d", &k);
	while(i!=k){
		pow=pow*x;
		i++;
	}
	printf("pow: %d\n", pow);
	
	result = f /pow;
	printf("result : %f", result);
	

}
