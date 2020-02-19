#include <stdio.h>

int sort(int array[],int N){
	int i=0, j, temp;

	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(array[j]< array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] =  temp;
			}
		}
	}
}

int main(){
	int A[100],
	a,n,array;
	
	printf("enter your arrays length: ");
	scanf("%d",&n);
	printf("enter numbers of your array: \n");
	for(a=0; a<n; a++){
		scanf("%d", &A[a]);
	}
	array = sort(A,n);
	printf("ascending sort: \n");
	for(a=0; a<n; a++){
		printf("%d  ", A[a]);
	}
	printf("\ndescending sort: \n");
	for(a=n-1; a>=0; a--){
		printf("%d  ", A[a]);
	}

}
