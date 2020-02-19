#include <stdio.h>
int main(){
	int n;
	printf(" Input the number of elements of array : ");
	scanf("%d",&n);
	int i, array[n];
	int *pt;

   pt = &array[0];  // pt stores the address of base array arr1 
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",pt);//accept the address of the value
	  pt++;
	  } 	
	
   pt = &array[n - 1];

   printf("\n The elements of array in reverse order are :");

   for (i = n; i > 0; i--) 
   {
      printf("\n element - %d : %d  ", i, *pt);
      pt--;
   }

}


