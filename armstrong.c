//9. Write C code to check whether a number is Armstrong number or not.

#include <stdio.h>
#include <math.h>

int main(){
	int N,A;
	int d,sum=0,i=0;
	printf("Enter N: ");
    scanf("%d", &N);
    A=N;
    while (A != 0) {
      i++;
      A = A/10;
   }
   
    A = N;
   
    while (A!= 0) {
      d = A%10;
      sum = sum + pow(d, i);
      A = A/10;
   }
 
   if (N == sum)
      printf("%d is an Armstrong number.\n", N);
   else
      printf("%d isn't an Armstrong number.\n", N);
 
   return 0;
}
