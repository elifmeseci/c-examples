#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reverse[100];
    int flag;

    printf("Enter any string: ");
    gets(str);

    strcpy(reverse, str); //Copies original string to reverse
    strrev(reverse);      //Finds the reverse of string

    flag = strcmp(str, reverse); //Checks whether both are equal or not

    if(flag == 0)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}
