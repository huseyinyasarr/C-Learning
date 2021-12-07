#include<stdio.h>
#include<conio.h>

/* 
#include dahil etmek
\n = new line yani alt sat�ra ge�er.
\t = tab yani tab kadar bo�luk b�rak�r.
 */
 
 
 /* 
 De�i�kenler:
 **char: karakter
 **int: tam say�
 **float: virg�ll� say�lar 
 **double: virg�ll� say�lar ama daha fazla karakter bar�nd�rabilir
 short: int gibi ama daha d���k yer kaplar
 long: int gibi ama daha fazla yer kaplar 
 
 **CHAR: bu veri tipi 1 byte (8 bit) yer kaplar. 0 dan 255 e kadar say�lar� veya buna denk gelen harfleri depolar.
 **INT: bu veri tipi 4 byte (32 bit) yer kaplar. -2^16 ile 2^16 aras�ndaki tam say� de�erlerini al�r.
 SHORT INT: 2 byte (16 bit) yer kaplar. -2^8 ile 2^8 aras�ndaki tam say� de�erlerini al�r.
 LONG INT: 8 byte (64 bit) yer kaplar. -2^32 den 2^32 aras�nda tam say� de�erleri al�r.
 **FLOAT: kesirli say�lar� tutmak i�in kullan�l�r.
 **DOUBLE: ayn� float gibidir ancak virg�lden sonra daha fazla rakamlar yazmam�z� sa�lar. 
 */



/*

%d : int (tam say�) de�erleri i�in printf'de format belirleyicidir. %d, yazd�raca��n �eyin tam say� oldu�u anlam�na gelir.
�R.:
int a = 5;
printf("%d",a); a'n�n e�iti olan 5'i yazd�r�r.

%f : float ve double (kesirli say�lar) i�in format belirleyici yani yaz�lacak say�n�n kesirli say� oldu�unu belirtir.
�R.:
float b = 3.1;
printf("%f",b);

double c = 2.444;
printf("%f",c);

bunlar� ayn� anda bast�rmak istersen:
float d = 2.1;
double e = 5.111;
printf("%f %f",d,e);  2.1 5.111 �eklinde yazar.

%c : char(karakter) (tek harf) oldu�unu belirtir.
char f1 = 'a'; *karakterleri tek t�rnak aras�nda tan�mla.
printf("%c",f1); ��kt� a olur.
printf("%d",f1); a'n�n ASCII tablosundaki de�erini yazar.

%s : karakter dizini yani kelime

printf("%s","Bo�luksuzNeYazarsanYaz");    *yazd�rmak istedi�ini �ift t�rnak aras�na yaz.
 






*/
int main() {
	
	printf("Merhaba yazilimci\n");
	printf("hos geldinizz");
	
	getch();
	return 0;
}
