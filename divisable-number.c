//9.Write C code to print all numbers between LOW and HIGH that are divisible by number.


#include <stdio.h>

int main(){
	int N,i;
	int low, high;
	printf("enter value of low and high ");
	scanf("%d%d", &low, &high);
	printf("enter N");
	scanf("%d", &N);
	for(i=low; i<high; i++){
		if(i%N==0)
			printf("%d\n", i);	
	}
}

