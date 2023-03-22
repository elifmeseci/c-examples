//Bir karakterin string içindeki frekansýný bulduran c programý
#include <stdio.h>
#include <stdlib.h>
int main(){
	char metin[100];
	int i,sayac=0,frekans=0;
	char harf;
	printf("Metin giriniz:");
	gets(metin);
	printf("Harfi giriniz:");
	harf = getchar();
	while(metin[sayac] != 0){
		if(metin[sayac] == harf)
			frekans++;
		sayac++;
	}
	printf("%c karakteri %s metninde %d kez geciyor.",harf,metin,frekans);
	return 0;
}
