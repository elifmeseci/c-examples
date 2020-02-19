#include <stdio.h>

int greatest(int a[], int n, int max){
	
	if(n>0){
		if(a[n-1] > max){
			max = a[n-1];
			greatest(a, n-1,max);
		}
		else{
			greatest(a, n-1,max);
		}	
	}
	else
		return max;
}
int main(){
	int i,n;
	int max ;
	printf("enter your array lenght: \n");
	scanf("%d", &n);
	int array[n];
	printf("enter your array: \n");
	for(i=0; i<n; i++){
		scanf("%d",&array[i]);
	}
	max = array[n-1];
	printf("%d", greatest(array,n,max));
}
