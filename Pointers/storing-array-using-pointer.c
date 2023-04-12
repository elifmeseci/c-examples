#include <stdio.h>
int main()
{
   int arr[10], i,n;
   int *ptr;
   ptr=&arr[0];
  
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("%d. element : ",i+1);
	  scanf("%d",ptr+i);//arr[i]
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf("%d. element: %d \n",i+1,*(ptr+i));
	  }
	   return 0;
}
