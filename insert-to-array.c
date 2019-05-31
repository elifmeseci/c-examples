//5) Insert an Element in a Specified Position in a given Array
#include <stdio.h>
 
int main(){
   int a[100], pstn, c, n, value;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &a[c]);
 
   printf("Enter the location to insert\n");
   scanf("%d", &pstn);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= pstn - 1; c--)
      a[c+1] = a[c];
 
   a[pstn-1] = value;
 
   printf("array is:\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", a[c]);
 
   return 0;
}
