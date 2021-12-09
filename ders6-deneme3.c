#include<stdio.h>
#include <locale.h>

int main() {
	
	float birKenar;
	float hacim;
		
	
	setlocale(LC_ALL, "Turkish");
	
	printf("küpün hacmini hesaplama");
	printf("\nküpün bir kenarýný giriniz:");
	scanf("%f",&birKenar);
	hacim = 1.0*birKenar*birKenar*birKenar;
	printf("Küpün hacmi %.2f'dir.",hacim);
	
	
	
	
	
	
	return 0;
}
