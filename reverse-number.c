//The program that prints out the reverse of a number.
#include <stdio.h>

int main(){
	int number,tmp,newNum=0;
	printf("Enter number:");
	scanf("%d",&number);
	tmp=number;
	while(tmp>0){
		newNum = newNum*10 + tmp%10;
		tmp/=10;
	}
	printf("reverse of %d: %d",number,newNum);
	return 0;
}
