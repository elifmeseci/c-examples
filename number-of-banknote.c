//Find the haw many banknote needed for a given amount of money.
#include <stdio.h>

int main(){
	int money;
	int a=0, b=0, c=0, d=0;
	printf("para miktarini giriniz: ");
	scanf("%d", &money);
	
	a= money/100;
	money=money% 100;
	b= money/50;
	money= money%50;
	c= money/20;
	money = money%20;
	d= money/10;
	printf("100luk banknot sayisi: %d\n", a);
	printf("50lik banknot sayisi: %d\n", b);
	printf("20lik banknot sayisi: %d\n", c);
	printf("10luk banknot sayisi: %d\n", d);
}
