#include<locale.h>
#include<stdio.h>

float ortalama(int ilk, int ikinci) {
	float ort;
	ort = (ilk + ikinci)/2.0;
	return ort;
	
}



int main() {
	setlocale(LC_ALL,"Turkish");
	int a,b;
	
	printf("�ki say� giriniz\nilk say�: ");
	scanf("%d",&a);
	printf("�kinci say�: ");
	scanf("%d",&b);
		
	ortalama(a,b);
	printf("%.2f",ortalama(a,b));
	
	
	
	
	
	
	
	
	
	return 0;
}
