#include <stdio.h>

int calculateLength(char* ch)
{
   int ctr = 0;
   while (*ch != '\0') 
   {
      ctr++;
      ch++;
   }
   return ctr;
}
void main() 
{
   char str[25];
   int l;
   
   printf(" Input a string : ");
   gets(str);
   
   l = calculateLength(str);  // or &str[0]
   printf(" The length of the given string %s is : %d ", str, l);


}
 

