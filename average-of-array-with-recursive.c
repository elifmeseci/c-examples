#include <stdio.h>

float average(int A[],int n){
	if(n == 1)
		return (float)A[n-1];
	else
		return ((float)(average(A,n-1)*(n-1)+ A[n-1])/n);
}
int main(){
	int n,i;
	printf("enter your array lenght: ");
	scanf("%d", &n);
	int array[n];
	printf("enter your array elements: \n");
	for(i=0; i<n; i++)
		scanf("%d", &array[i]);
	printf("\nAverage of array is %.2f",average(array,n));
	
}
