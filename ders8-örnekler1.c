#include<stdio.h>
#include <locale.h>
int main() {
	
	int a,b,c,d,e;
	float aritmetik;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("5 say�n�n aritmetik ortalamas�n� hesaplama");
	printf("\n1. say�y� giriniz:");
	scanf("%d",&a);
	printf("2. say�y� giriniz:");
	scanf("%d",&b);
	printf("3. say�y� giriniz:");
	scanf("%d",&c);
	printf("4. say�y� giriniz:");
	scanf("%d",&d);
	printf("5. say�y� giriniz:");
	scanf("%d",&e);
	
	aritmetik = 1.0*(a+b+c+d+e)/5;
	printf("Aritmetik ortalamas� %.2f'dir.",aritmetik);
	
	
	
	return 0;
}
