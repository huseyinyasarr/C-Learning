#include<stdio.h>
#include <locale.h>


int main() {
	
	int hacim;
	int yukseklik;
	int en;
	int boy;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Dikdörtgen hacmi hesaplama (tam sayý)");
	printf("\nYükseklik giriniz:");
	scanf("%d",&yukseklik);
	printf("En ölçüsü giriniz:");
	scanf("%d",&en);
	printf("Boy ölçüsünü giriniz:");
	scanf("%d",&boy);
	
	hacim = yukseklik*en*boy;
	printf("Dökdörtgenin hacmi: %d'dir",hacim);
	
	
	return 0;
}
