#include <stdio.h>

int obeb(int x,int y){
	if(y==0)
		return x;
	else
		return obeb(y,x%y);			
}

int main(){
	int num1, num2;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter a number: ");
	scanf("%d", &num2);
	int result= obeb(num1,num2);
	printf("obeb(%d,%d)=%d\n", num1, num2, result);
	return 0;
}


