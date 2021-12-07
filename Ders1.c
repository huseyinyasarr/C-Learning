#include<stdio.h>
#include<conio.h>

/* 
#include dahil etmek
\n = new line yani alt satýra geçer.
\t = tab yani tab kadar boþluk býrakýr.
 */
 
 
 /* 
 Deðiþkenler:
 **char: karakter
 **int: tam sayý
 **float: virgüllü sayýlar 
 **double: virgüllü sayýlar ama daha fazla karakter barýndýrabilir
 short: int gibi ama daha düþük yer kaplar
 long: int gibi ama daha fazla yer kaplar 
 
 **CHAR: bu veri tipi 1 byte (8 bit) yer kaplar. 0 dan 255 e kadar sayýlarý veya buna denk gelen harfleri depolar.
 **INT: bu veri tipi 4 byte (32 bit) yer kaplar. -2^16 ile 2^16 arasýndaki tam sayý deðerlerini alýr.
 SHORT INT: 2 byte (16 bit) yer kaplar. -2^8 ile 2^8 arasýndaki tam sayý deðerlerini alýr.
 LONG INT: 8 byte (64 bit) yer kaplar. -2^32 den 2^32 arasýnda tam sayý deðerleri alýr.
 **FLOAT: kesirli sayýlarý tutmak için kullanýlýr.
 **DOUBLE: ayný float gibidir ancak virgülden sonra daha fazla rakamlar yazmamýzý saðlar. 
 */



/*

%d : int (tam sayý) deðerleri için printf'de format belirleyicidir. %d, yazdýracaðýn þeyin tam sayý olduðu anlamýna gelir.
ÖR.:
int a = 5;
printf("%d",a); a'nýn eþiti olan 5'i yazdýrýr.

%f : float ve double (kesirli sayýlar) için format belirleyici yani yazýlacak sayýnýn kesirli sayý olduðunu belirtir.
ÖR.:
float b = 3.1;
printf("%f",b);

double c = 2.444;
printf("%f",c);

bunlarý ayný anda bastýrmak istersen:
float d = 2.1;
double e = 5.111;
printf("%f %f",d,e);  2.1 5.111 þeklinde yazar.

%c : char(karakter) (tek harf) olduðunu belirtir.
char f1 = 'a'; *karakterleri tek týrnak arasýnda tanýmla.
printf("%c",f1); çýktý a olur.
printf("%d",f1); a'nýn ASCII tablosundaki deðerini yazar.

%s : karakter dizini yani kelime

printf("%s","BoþluksuzNeYazarsanYaz");    *yazdýrmak istediðini çift týrnak arasýna yaz.
 






*/
int main() {
	
	printf("Merhaba yazilimci\n");
	printf("hos geldinizz");
	
	getch();
	return 0;
}
