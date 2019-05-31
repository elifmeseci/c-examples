//21.Write C code to find the sum of the series 1 +11 + 111 + 1111 + .. n terms

#include <stdio.h>

int main(){ 
  int n,i; 
  long sum=0;
  long int t=1;
  printf("enter n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%ld + ",t);
     sum=sum+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
}
