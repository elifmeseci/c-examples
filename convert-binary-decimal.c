/*Write C code to convert a binary number into a decimal number without using
array, function and while loop.*/


#include <stdio.h>
#include <math.h>

int main(){
	int bn, n,p=1;
	int dn=0,i=1,j,d;

	printf("enter a binary number :");
	scanf("%d",&n);
	bn=n;
	for (j=n;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   dn=dn+(d*p);
	   i++;
	}
        printf("\nThe Binary Number : %d\nDecimal  Number : %d \n\n",bn,dn);
}
