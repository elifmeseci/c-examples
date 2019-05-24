/*klavyeden girilen N elemanlý A B C dizilerini kullanarak D=A+B-C iþlemiyle
D dizisini oluþtup bu yeni diziyi büyükten küçüðe doðru sýralayan program*/
#include <stdio.h>

int main(){
	int N,i,j,temp;
	printf("Enter the number of elements:\n ");
	scanf("%d",&N);
	int A[N],B[N],C[N],D[N];
	printf("Enter the elements of array A:\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	printf("Enter the elements of array B:\n");
	for(i=0;i<N;i++){
		scanf("%d",&B[i]);
	}
	printf("Enter the elements of array C:\n");
	for(i=0;i<N;i++){
		scanf("%d",&C[i]);
	}
	for(i=0;i<N;i++){
		D[i] = A[i]+B[i]-C[i];
	}
	for(i=0;i<N;i++){
		for(j=i+1; j<N; j++){
            if(D[i] > D[j]){
            	temp=D[i];
            	D[i]=D[j];
            	D[j]=temp;
            }
        }
	}
	printf("\nArray D: \n");
	for(i=0; i<N; i++){
		printf("%d ", D[i]);	
	}
}
