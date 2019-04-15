/*The c program that calculate pass or not according to midterm and final grade with matrix */
#include <stdio.h>

int main(){
	int i,j,n;
	printf("Enter the number of student:\n");
	scanf("%d", &n);
	int a[n][2];
	
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("enter vize: ");
				scanf("%d",&a[i][j]);
			}
			else{
				printf("\nenter final: ");
				scanf("%d",&a[i][j]);
			}
			}
			j=0;
			if((a[i][j]*0.4+a[i][j+1]*0.6)>60)
				printf("pass\n");
	
			if((a[i][j]*0.4+a[i][j+1]*0.6)<60)
				printf("failed..\n");
		
	}
}
