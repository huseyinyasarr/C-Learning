#include<locale.h>
#include<stdio.h>

float daire(float r) {
	float pi = 3.14;
	float alan;
	alan = pi*r*r;
	return alan; //d��ar�ya vermek istedi�in tan�m� buraya yaz.
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	float r;
	
	printf("Alan�n� hesaplamak istedi�iniz dairenin �ap�n� giriniz: ");
	scanf("%f",&r);
	printf("%f",daire(r));
	
	
	
	return 0;
}
