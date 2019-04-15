//The program that calculates the average of an array with n float element.

#include <stdio.h>

int main(){
	int i,n;
	printf("enter the number of element:\n");
	scanf("%d",&n);
	float a[n];
	float ort,sum=0;
	
	printf("enter values of array:  \n");
	for(i=0;i<n;i++){
		scanf("%f", &a[i]);
		sum+=a[i];	
	}
	ort = sum / n;
	
	printf("ortalama: %.2f", ort);
	
}
