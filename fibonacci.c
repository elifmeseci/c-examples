//The program that prints out n fibonacci numbers.
#include <stdio.h>

int main(){
	int a[100];
	int n,i;

	printf("enter n for array: ");
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	
	for(i=0; i<n; i++){
		a[i+2]=a[i]+a[i+1];
	}
	for(i=0; i<n; i++){
		printf("array is: %d\n",a[i]);
	}
}
