#include<stdio.h>
#include<locale.h>

int main() {
	
	float a,b;
	int c;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("HESAP MAK�NES�");
	
	printf("\n1.say�y� giriniz:");
	scanf("%f",&a);
	
	printf("\n2.say�y� giriniz:");
	scanf("%f",&b);
	
	printf("%s %s %s %s %s %s","Yapmak istedi�iniz i�lemi se�iniz\n\n","Toplama i�in 1'e bas�n�z.\n","��karma i�in 2'ye bas�n�z.\n","�arpma i�in 3'e bas�n�z.\n","B�lme i�in 4'e bas�n�z.\n","\nSe�iminiz:");
	
	scanf("%d",&c);
	
	printf("Sonu�:");
	
	if (c==1) {
		printf("%f",a+b);
	}
	
	if (c==2) {
		printf("%f",a-b);
	}
	
	if (c==3) {
		printf("%f",a*b);
	}
	
	if (c==4) {
		printf("%f",a/b);
	}
	

	setlocale(LC_ALL, "Turkish");
	
	
	
	return 0;
}
