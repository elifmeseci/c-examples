/*Write a C code that multiples a matrix having size NxM with a matrix having size MxN and prints  
the resulting matrix on the screen. Values of matrix elements will be put from keyboard. */
#include <stdio.h>

int main(){
	int n,m,i,j;
	printf("enter n and m for matrix: ");
	scanf("%d%d", &n,&m);
	int A[n][m], B[m][n], C[n][n];
	
	printf("\nenter values for A matrix: ");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nenter values for B matrix: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			C[i][j] = A[i][j] * B[j][i];
			printf("\nz[%d][%d]: %d", i,j, C[i][j]);
		}
		
	}
	
}
