#include<locale.h>
#include<stdio.h>

float daire(float r) {
	float pi = 3.14;
	float alan;
	alan = pi*r*r;
	return alan; //dýþarýya vermek istediðin tanýmý buraya yaz.
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	float r;
	
	printf("Alanýný hesaplamak istediðiniz dairenin çapýný giriniz: ");
	scanf("%f",&r);
	printf("%f",daire(r));
	
	
	
	return 0;
}
