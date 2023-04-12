#include <stdio.h>
//Pointer : Find the factorial of a given number

void findFact(int n,int *f)
{
    int i;
    *f =1;
    
    for(i=1; i<=n; i++)
    	*f= *f * i;
}
int main()
{
	int fact, num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	findFact(num,&fact);
	printf("the fact of %d is: %d", num, fact);
	
	return 0;
}
