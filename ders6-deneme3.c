#include<stdio.h>
#include <locale.h>

int main() {
	
	float birKenar;
	float hacim;
		
	
	setlocale(LC_ALL, "Turkish");
	
	printf("k�p�n hacmini hesaplama");
	printf("\nk�p�n bir kenar�n� giriniz:");
	scanf("%f",&birKenar);
	hacim = 1.0*birKenar*birKenar*birKenar;
	printf("K�p�n hacmi %.2f'dir.",hacim);
	
	
	
	
	
	
	return 0;
}
