//The program that prints out the prime numbers between 2 and 100.
#include <stdio.h>
int main(){
	int i,counter=0,number;
	for(number=2;number<100;number++){
		counter = 0;
		for(i=2; i<number;i++){
			if(number%i==0)
				counter++;
		}
		if(counter==0)
			printf("%d\t",number);
	}

}
