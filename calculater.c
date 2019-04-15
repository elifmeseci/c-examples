//Calculater
#include <stdio.h>

int main(){
	int choice;
	float a,b,result;
	
	printf("enter two num:  ");
	scanf("%d%d", &a,&b);
	printf("1 for +\n2 for - \n3 for * \n4 for / \n");
	scanf("%d", &choice);
	switch(choice){
		case 1: {
			result= a+b;
			break;
		}
		case 2: {
			result= a-b;
			break;
		}
		case 3: {
			result= a*b;
			break;
		}
		case 4: {
			result= a/b;
			break;
		}
	}
	printf("result is %.2f", result);
	
}
