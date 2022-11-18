/*Program to find how many of each element there are in an array of N elements entered from the keyboard*/

#include <stdio.h>

int main(){

	int i,j,counter=0;
	int N,a;
	
	printf("The number of elements in the array: ");
	scanf("%d",&N);
	int A[N];
	printf("Enter elements of array:\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a= A[i];
			if(a==A[j])
				counter++;	
		}
		printf("Element %d entered %d time\n",A[i],counter);
		counter=0;
	}
}
