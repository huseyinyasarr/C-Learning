#include<locale.h>
#include<stdio.h>

int enBuyukSayi(int *a, int uzunluk) { // " * " yaparak gelen array adrese d�n��ebilir. a[] �eklinde yazarsakta ayn� anlama gelir.
	
	int enBuyuk = *a; // *a = enBuyuk'e a'n�n s�f�r�nc� eleman�na e�itleriz. Art�k enBuyuk = 2'dir.
	int i;
	
	for(i=1; i < uzunluk; ++i) { //1 den ba�latmam�z�n nedeni a�a��da daha iyi anla��lacakt�r.
		
		if (*(a+i) > enBuyuk) { //e�er a[1] > a[0] ise d�ng�ye girer. De�ilse for sayesinde a[2], a[3] �eklinde deneyerek ilerler. a[0] dan n�y�k eleman varsa if'e girilir.
		
		enBuyuk = *(a+i); /* a[0] dan b�y�k olan eleman art�k enBuyuk say�d�r. a[3] > a[0] dan b�y�k oldu�u i�in if blo�una girer ve enBuyuk say�ya e�itlenir. 
		Art�k enBuyuk=a[3]'d�r. art�k for d�ng�s� a[3] i�in ayn� �ekilde devam eder. */
		}
	}
	
	return enBuyuk;
}




int main() {
	setlocale(LC_ALL,"Turkish");
	
	int sayilar[5] = {5,1,4,7,2};
	//int *a = &sayilar; //art�k bu �ekilde yapmaya gerek yok ��nk� fonksiyonda int *a �eklinde gelen veriyi pointera �evirmi� oluyoruz.

	int buyuk;
	
	buyuk = enBuyukSayi(sayilar,5); //C de arraylerin uzunlu�unu fonksiyona g�ndermemiz gerekiyor. 5, arrayin uzunlu�u oluyor.
	
	printf("en b�y�k say�: %d",buyuk);
	
	
	
	
	
	
	
	
	return 0;
}
