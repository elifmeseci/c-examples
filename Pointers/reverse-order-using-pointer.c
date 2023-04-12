#include <stdio.h>
void main() 
{
   int n, i, arr[10];
   int *pt;
   pt = &arr[0];
   
   printf(" Input the number of elements to store in the array  : ");
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
      {
	  printf("%d.element: ",i+1);
	  scanf("%d",pt);
	  pt++;
	  } 	
	
   pt = &arr[n - 1];

   printf("\nThe elements of array in reverse order are :");

   for (i = n; i > 0; i--) 
   {
      printf("\n%d.element: %d  ", i, *pt);
      pt--;
   }
printf("\n\n");
}

