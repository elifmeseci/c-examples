/*The program that finds the arithmetic average of an array A which has N element entered by user. 
And places the elements according to avarege if the element is smaller then average to array B, 
if the element is greater then average to array C*/

#include <stdio.h>

int main(){
	int N,i,j,k;
	printf("enter the number of elements: ");
	scanf("%d",&N);
	int A[N],B[N],C[N];
	int avr,sum=0;
	printf("enter the elements of array:\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		sum += A[i];
	}
	printf("\nThe sum of elements: %d\n", sum);
	avr = sum / N;
	printf("\nThe average of elements: %d\n", avr);
	for(i=0,j=0;i<N,j<N;i++,j++){
		if(A[i]<avr){
			B[j]=A[i];
			}
	}
	for(i=0,k=0;i<N,k<N;i++,k++){
		if(A[i]>avr){
			C[k]=A[i];
		}	
	}
	
	printf("\nArray B: \n");
	for(j=0;j<N;j++){
		if(B[j] !=0)
			printf("%d  ", B[j]);
	}
	printf("\nArray C: \n");
	for(k=0;k<N;k++){
		if(C[k] !=0)
			printf("%d  ", C[k]);
	}
}
