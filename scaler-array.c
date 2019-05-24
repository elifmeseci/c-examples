/*klavyeden girilen N elemanlý A dizisinin elemanlarýnýn karelerini alarak B;
karaköklerini alarak C dizisini oluþturup bu yeni iki dizinin skaler çarpýmýný
bulan program */
#include <stdio.h>
#include <math.h>

int main(){
	int N,a,b,c;
	printf("Number of array's element: ");
	scanf("%d",&N);
	int A[N],B[N],C[N];
	printf("Enter element of array\n");
	for(a=0; a<N; a++){
		scanf("%d",&A[a]);
	}
	for(b=0,a=0; a<N,b<N; a++,b++){
		B[b] = A[a]*A[a]; 
	}
	printf("\nElement of array B: ");
	for(b=0; b<N; b++){
		printf("%d  ",B[b]);
	}
	
	for(a=0,c=0; a<N,c<N; a++,c++){
		C[c] = sqrt(A[a]);
	}
	printf("\nElement of array C: ");
	for(c=0; c<N; c++){
		printf("%d  ",C[c]);
	}
	for(b=0,c=0; b<N,c<N; b++,c++){
		printf("\nB[b]xC[c] =  %d", B[b]*C[c]);
	}
	return 0;
}
