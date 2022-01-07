#include<stdio.h>
#include<locale.h>

/*

fonksiyon tanýmlama

	DonusTipi fonksiyonAdi(birden çok paramet olabilir veya hiç olmayabilir) {
		//////fonksiyon bloðu
		
		
		yapýlacak iþlemler
	
	
	
	}

void = hiçbir þey dönmüyorsa kullanýlýr. printf gibi
ÖR:
void fonksiyonunAdý(deðiþkenTipi deðiþkenAdý) {

	yapmak istediklerini yaz


}

sonrasýnda main içinde kullanýrýz (çaðýrýrýz)

*/

void hataKodu(int fatalEror) {
	printf("Hata kodu: %d",fatalEror);
}


int main() {
	
	setlocale(LC_ALL, "Turkish");
	int a;
	
	printf("Negatif olmayan bir sayý giriniz: ");
	scanf("%d",&a);
	
	if (a<0) {
	hataKodu(/*buraya istediðin int deðerini yaz*/404);
	}
	
	else {
		
		printf("helal");
	}
	
	
	
	
	return 0;
}
