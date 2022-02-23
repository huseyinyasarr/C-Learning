#include<locale.h>
#include<stdio.h>

/*
pointer = bellekteki yerleri (adres bilgileri) g�sterir.
"&" kullan�c�dan adres bilgisini al demek oluyor.
*/

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int a = 2; //a'ya 2 de�erini atad�k. Bu de�er bellekte bir yerde saklan�yor.
	
	int *p = &a; //a, int de�er oldu�u i�in int ile tan�ml�yoruz. " * " i�areti, pointer oldupu anlam�na gelir. & de�i�kenin adres bilgisini vermektedir.
	printf("%u",p); // "u" adresin 10'luk tabanda yaz�lmas�n� sa�lar, u yerine "p" yazacak olsayd�k adresi, hex t�r�nde yazd�racakt�.
	printf("%d",*p); // burada * i�areti, asl�nda a'n�n de�erini almas�na yar�yor. p pointer'� a'n�n oldu�u adrese gider ve oradaki de�eri al�r. printf ile de ekrana yazd�r�r.
	
	
	
	
	
	
	
	
	return 0;
}
