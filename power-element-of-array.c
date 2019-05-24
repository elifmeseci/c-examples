/*Klavyeden -1 girilene kadar girilen sayýlarý diziye aktaran, ardýndan her elemanýn karesini
ekrana basan programý yazýnýz. (Dizi eleman sayýsý max 10 olacaktýr.)*/
#include <stdio.h>

int main(){
	int A[10];
	int i,pow;
	
	printf("enter value of array: \n");
	for(i=0; i<10; i++){
		scanf("%d",&A[i]);
		if(A[i]!=-1){
			pow = A[i]*A[i];
			printf("pow = %d\n",pow);
		}
		else
			break;

	}
}
