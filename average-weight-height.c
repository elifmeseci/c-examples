//The program that finds the average of 10 student's weight and height

#include <stdio.h>

int main(){
	float height=0,weight=0,avrh,avrw;
	float A[10][2];
	int i,j;
	
	for(i=0;i<10;i++){
		printf("%d . students height and weight: ",i+1);
		for(j=0;j<2;j++){
			if(j==0){
				scanf("%f",&A[i][j]);
				height+= A[i][j];
			}
			else{
				scanf("%f",&A[i][j]);
				weight+= A[i][j];
			}
		}
	}
	avrh= height/10;
	avrw= weight/10;
	printf("\nheight average: %.2f\nweight average: %2.f", avrh,avrw);
	
}
