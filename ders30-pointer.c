#include<locale.h>
#include<stdio.h>

/*
pointer = bellekteki yerleri (adres bilgileri) gösterir.
"&" kullanýcýdan adres bilgisini al demek oluyor.
*/

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int a = 2; //a'ya 2 deðerini atadýk. Bu deðer bellekte bir yerde saklanýyor.
	
	int *p = &a; //a, int deðer olduðu için int ile tanýmlýyoruz. " * " iþareti, pointer oldupu anlamýna gelir. & deðiþkenin adres bilgisini vermektedir.
	printf("%u",p); // "u" adresin 10'luk tabanda yazýlmasýný saðlar, u yerine "p" yazacak olsaydýk adresi, hex türünde yazdýracaktý.
	printf("%d",*p); // burada * iþareti, aslýnda a'nýn deðerini almasýna yarýyor. p pointer'ý a'nýn olduðu adrese gider ve oradaki deðeri alýr. printf ile de ekrana yazdýrýr.
	
	
	
	
	
	
	
	
	return 0;
}
