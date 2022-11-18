//Write C code to convert the length in feet to centimeter.

#include <stdio.h>

int main(){
	float feet;
	float cm;
	
	printf("Enter lenght in feet: ");
	scanf("%f", &feet);
	
	cm = (feet/3.26)*100;
	printf("as a centimeter: %f", cm);
}

