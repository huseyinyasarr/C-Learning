#include<stdio.h>
#include <locale.h>


int main() {
	
	int hacim;
	int yukseklik;
	int en;
	int boy;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Dikd�rtgen hacmi hesaplama (tam say�)");
	printf("\nY�kseklik giriniz:");
	scanf("%d",&yukseklik);
	printf("En �l��s� giriniz:");
	scanf("%d",&en);
	printf("Boy �l��s�n� giriniz:");
	scanf("%d",&boy);
	
	hacim = yukseklik*en*boy;
	printf("D�kd�rtgenin hacmi: %d'dir",hacim);
	
	
	return 0;
}
