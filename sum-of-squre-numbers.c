//The program that prints out the the sum of square numbers untill the user input -1.

#include <stdio.h>
#include <conio.h>

int main(){
	int i,a,control;
	int sum=0;
	
	printf("enter number: \n");
	scanf("%d",&a);
	while(a!=-1){
		for(i=0;i<=a;i++){
			control = i*i;
			if(control==a){
				sum += a;
				printf("square of %d: %d\n",i,control);
			}
		}
		scanf("%d", &a);
	}
	printf("sum is: %d", sum);
}

