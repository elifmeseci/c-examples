/*Klavyeden -1 girilene kadar girilen say�lar� diziye aktaran, ard�ndan her eleman�n karesini
ekrana basan program� yaz�n�z. (Dizi eleman say�s� max 10 olacakt�r.)*/
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
