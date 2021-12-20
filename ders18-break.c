#include<stdio.h>
#include<locale.h>



int main() {
	
	int toplam;
	toplam = 0;
	int girdi, i;
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("1:Toplam\n2:Çýkartma\n3:Çarpma\n4:Bölme\n");
	scanf("%d",&i);
	
	for(i=1; true; ++i) {
		
		printf("Sayý girniz (çýkmak için 001'e basýnýz'): ");
		scanf("%d",&girdi);
		toplam = toplam + girdi;
		
		
	}
	printf("%d",toplam);
	
	
	
	
	
	
	
	
	
	return 0;
}
