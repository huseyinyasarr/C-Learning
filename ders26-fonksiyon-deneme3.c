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
	
	printf("Ýki sayý giriniz\nilk sayý: ");
	scanf("%d",&a);
	printf("Ýkinci sayý: ");
	scanf("%d",&b);
		
	ortalama(a,b);
	printf("%.2f",ortalama(a,b));
	
	
	
	
	
	
	
	
	
	return 0;
}
