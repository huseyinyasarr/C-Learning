#include<stdio.h>
#include<locale.h>



int main() {
	
	int toplam;
	toplam = 0;
	int girdi, i;
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("1:Toplam\n2:��kartma\n3:�arpma\n4:B�lme\n");
	scanf("%d",&i);
	
	for(i=1; true; ++i) {
		
		printf("Say� girniz (��kmak i�in 001'e bas�n�z'): ");
		scanf("%d",&girdi);
		toplam = toplam + girdi;
		
		
	}
	printf("%d",toplam);
	
	
	
	
	
	
	
	
	
	return 0;
}
