#include<stdio.h>
#include<locale.h>

/*

fonksiyon tan�mlama

	DonusTipi fonksiyonAdi(birden �ok paramet olabilir veya hi� olmayabilir) {
		//////fonksiyon blo�u
		
		
		yap�lacak i�lemler
	
	
	
	}

void = hi�bir �ey d�nm�yorsa kullan�l�r. printf gibi
�R:
void fonksiyonunAd�(de�i�kenTipi de�i�kenAd�) {

	yapmak istediklerini yaz


}

sonras�nda main i�inde kullan�r�z (�a��r�r�z)

*/

void hataKodu(int fatalEror) {
	printf("Hata kodu: %d",fatalEror);
}


int main() {
	
	setlocale(LC_ALL, "Turkish");
	int a;
	
	printf("Negatif olmayan bir say� giriniz: ");
	scanf("%d",&a);
	
	if (a<0) {
	hataKodu(/*buraya istedi�in int de�erini yaz*/404);
	}
	
	else {
		
		printf("helal");
	}
	
	
	
	
	return 0;
}
