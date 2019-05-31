/*12.Write C code to count and print all numbers from LOW to HIGH by steps of
   STEP. Test with LOW=0 and HIGH=100 and STEP=5.*/

#include <stdio.h>

int main(){
	int i;
	int low, high, step;
	printf("enter value of low and high ");
	scanf("%d%d", &low, &high);
	printf("enter the step");
	scanf("%d", &step);
	while(low<high){
		if(low%step==0){
			i++;
		}
		low++;
	}
	printf(" %d: %d times ", step, i);
	
}
