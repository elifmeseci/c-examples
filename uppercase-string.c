   //KLAVYEDEN GÝRÝLEN METNÝN ÝÇERÝSÝNDEKÝ KELÝMELERÝN SADECE ÝLK HARFÝNÝ BÜYÜK YAZDIRAN PROGRAM

#include <stdio.h>
#include <stdlib.h>
   
int main()
{
 char metin[100];
 int sayac=0,kontrol=1;
 printf("Metin giriniz:");
 gets(metin);
 while(metin[sayac] != '\0')
 {
 if(kontrol)
 {
 if(metin[sayac] >= 'a' && metin[sayac]<='z')
 metin[sayac] -= 32;
 kontrol = 0;
 }
 else
 {
 if(metin[sayac] >= 'A' && metin[sayac]<='Z')
 metin[sayac] += 32;
 }
 if(metin[sayac] == ' ' || metin[sayac] == '.')
 kontrol=1;
 sayac++;
 }
 puts(metin);
 return 0;
}
