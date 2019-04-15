//The program that finds the sum of two matrices which have same number of row and cloumn.

#include <stdio.h>

int main(){
	int a,b,i,j;
	printf("enter lenght for 2D array: ");
	scanf("%d%d", &a,&b);
	
	int A[a][b],B[a][b],C[a][b];
	
	printf("\nenter values for A matrix: ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nenter values for B matrix: ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &B[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			C[i][j] = A[i][j] + B[i][j];
			printf("C[%d][%d] = %d\n",i,j,C[i][j]);
		}
	}
}
