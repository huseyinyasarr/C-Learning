#include<stdio.h>
#include<locale.h>



int main() {
	
	/*
	do d�ng�s�n� g�r�nce i�ine girer ve i�lemi yapar. sonras�nda while �art� kontrol edilir.
	�art do�ruysa tekrardan do d�ner. while d�ng�s� ne zaman sa�lanmazsa while'�n i�indeki ger�ekle�ir.
		
	*/
	
	
	int a,b,toplam,hane;
	while(b<2) {
	toplam = 0;
	hane = 0;
	
	setlocale(LC_ALL, "Turkish");
	
	
	printf("say� giriniz: ");
	scanf("%d",&a);
	
	do {
		
		toplam = toplam + (a%10); //say� 123 olsun. 123'�n son basana��n� al�r (3) ve toplama atar. �kinci seferde say� 12 olarak gelir ve 12'nin 10'a b�l�m�nden kalan 2 olaca��ndan 2'yi al�r ve b�yle devam eder.
		++hane; //d�ng� bitene kadar saya� g�revi g�r�r.
		a = a/10; //123 say�s�n� int olarak 10'a b�ler ve her seferinde son basama�� siler. �kinci geli�te say� 12 olarak gelir.
		

		
	}
	while(a>0);
	
		printf("rakamlar yoplam�: %d \nhane say�s�: %d",toplam,hane);
	
	
	printf("\n��kmak i�in 2 tekrar i�in 1\n");
	scanf("%d",&b);
	
	
}
	
	return 0;
}
