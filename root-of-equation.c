#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, x1, x2;
	int d;
	printf("enter a,b,c");
	scanf("%d%d%d", &a, &b, &c);
	 
	d= b*b-4*a*c;
	
	if(d==0){
		x1=-b/2*a;
		x2=-b/2*a;
	}
	else if (d>0){
		x1=(-b-d^(1/2))/2*a;
		x1=(-b+d^(1/2))/2*a;
		printf("There is two roots: x1: %d, x2: %d", x1,x2);
	}
	else
		printf("no root");
}
