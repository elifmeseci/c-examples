//Write C code to convert a decimal number, n, to binary format

#include <stdio.h>
 
int main()
{
    long num, r, base = 1, binary = 0;
 
    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    while (num > 0)
    {
        r = num % 2;
        binary = binary + r * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %ld\n", binary);

}
