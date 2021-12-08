#include<stdio.h>
#include <locale.h>


int main() {
	
	float h;
	float kenar1;
	float kenar2;
	float hacim;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Dikdörtgen pramitin hacmini hesaplama");
	printf("\nPramitin yüksekliðini giriniz:");
	scanf("%f",&h);
	printf("Tabanýnýn bir kenarýný giriniz:");
	scanf("%f",&kenar1);
	printf("Tabanýnýn diðer kenarýný giriniz:");
	scanf("%f",&kenar2);
	
	hacim = (1/3.0)*kenar1*kenar2*h;
	printf("Prizmanýn hacmi: %f'dir",hacim);
	
	
	return 0;
}
