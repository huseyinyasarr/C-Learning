#include<stdio.h>
#include <locale.h>


int main() {
	
	float h;
	float kenar1;
	float kenar2;
	float hacim;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Dikd�rtgen pramitin hacmini hesaplama");
	printf("\nPramitin y�ksekli�ini giriniz:");
	scanf("%f",&h);
	printf("Taban�n�n bir kenar�n� giriniz:");
	scanf("%f",&kenar1);
	printf("Taban�n�n di�er kenar�n� giriniz:");
	scanf("%f",&kenar2);
	
	hacim = (1/3.0)*kenar1*kenar2*h;
	printf("Prizman�n hacmi: %f'dir",hacim);
	
	
	return 0;
}
