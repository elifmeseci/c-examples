//A program that prints only the first letter of words in capital text entered from the keyboard.

#include <stdio.h>
#include <stdlib.h>
   
int main()
{
 char str[100];
 int counter=0,control=1;
 printf("Enter a text:");
 gets(str);
 while(str[counter] != '\0')
 {
 if(control)
 {
 if(str[counter] >= 'a' && str[counter]<='z')
 str[counter] -= 32;
 control = 0;
 }
 else
 {
 if(str[counter] >= 'A' && str[counter]<='Z')
 str[counter] += 32;
 }
 if(str[counter] == ' ' || str[counter] == '.')
 control=1;
 counter++;
 }
 puts(str);
 return 0;
}
