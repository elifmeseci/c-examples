#include <stdio.h>

int main(){
	int y = 5,x;
	int *yPtr; 
	yPtr = &y;

	x = *yPtr;
	*yPtr = 8;
	
	printf("y degeri: %d\n", y);
	printf("y degerinin adresi: %d\n", &y);
	
	printf("yPtr degeri: %d\n", yPtr);
	printf("yPtr degerinin adresi: %d\n", &yPtr);
	printf("yPtr gosterdigi deger: %d\n", *yPtr);
	
	printf("x degeri: %d\n", x);
	printf("x degerinin adresi: %d\n", &x);
}
