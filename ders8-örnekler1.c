#include<stdio.h>
#include <locale.h>
int main() {
	
	int a,b,c,d,e;
	float aritmetik;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("5 sayýnýn aritmetik ortalamasýný hesaplama");
	printf("\n1. sayýyý giriniz:");
	scanf("%d",&a);
	printf("2. sayýyý giriniz:");
	scanf("%d",&b);
	printf("3. sayýyý giriniz:");
	scanf("%d",&c);
	printf("4. sayýyý giriniz:");
	scanf("%d",&d);
	printf("5. sayýyý giriniz:");
	scanf("%d",&e);
	
	aritmetik = 1.0*(a+b+c+d+e)/5;
	printf("Aritmetik ortalamasý %.2f'dir.",aritmetik);
	
	
	
	return 0;
}
