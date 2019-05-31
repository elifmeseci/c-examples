//15.Write C code to check Whether a Number is Palindrome or Not

#include <stdio.h>

int main(){
    int n, a, d, total=0;
    printf("Enter n: ");
    scanf("%d", &n);
    a=n;
	while(n!=0){
		d=n%10;
		total =total*10 + d;
		n=n/10;
	}
	if(total==a)
		printf("It is polindrom number. ");
	else
		printf("It is not polindrom number. ");
}
