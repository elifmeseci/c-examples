//The program that finds the reverse of array.
#include <stdio.h>

int main(){
	int n;
	printf("enter n for array: ");
	scanf("%d",&n);
	int a[n];
	int i,temp;
	
	
	printf("enter values in array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;	
	}
	printf("reverse of array: \n");
	for(i=0;i<n;i++){
		printf("%d\n", a[i]);
	}
}
