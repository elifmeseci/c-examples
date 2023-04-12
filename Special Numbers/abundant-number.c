# include <stdio.h>
# include <math.h>
//Check whether a given number is an Abundant number
int abundant(int n)
{
	int sum =0,i, temp = n;
	
	for(i =1; i< sqrt(n); i++){
		
		if(n%i == 0)
		{
			if(n/i== i)
				sum+=i;
			else{
				sum+=i;
				sum+= (n/i);
			}
		}
	}
	
	sum=sum-n;
	printf("Sum: %d", sum);
	
	if(sum > temp)
		printf("Number is abundant");
	else
		printf("Number is not abundant");
}

int main()
{
	int n;
	
	printf("Enter a number:");
	scanf("%d", &n);
	abundant(n);
	
	return 0;
}
