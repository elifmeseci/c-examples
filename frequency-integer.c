//24.Write C code to find frequency of each digit in a given integer.


#include <stdio.h> 

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[10];

    printf("Enter a number: ");
    scanf("%lld", &num);

    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }

    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

}
