//The program that assign the elements of array A to array B with reverse order and sign

#include <stdio.h>
#include <math.h>

int main(){
	int N,a,b;
	printf("enter the number of elements: ");
	scanf("%d",&N);
	int A[N],B[N];
	printf("Enter the elements of array\n");
	for(a=0; a<N; a++){
		scanf("%d",&A[a]);
	}
	for(a=0; a<N; a++){
		if(A[a]<0)
			A[a] = abs(A[a]); 
		else if(A[a]>0)
			A[a] = (-1)*A[a];
	}
	for(a=0,b=N-1;a<N,b>=0;a++,b--){
			B[b] = A[a];
		}
	
	printf("The elements of B:\n");
	for(b=0; b<N; b++){
		printf("%d  ", B[b]);
	}
}
