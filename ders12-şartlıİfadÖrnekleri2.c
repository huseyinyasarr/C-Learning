#include<stdio.h>
#include<locale.h>

int main() {
	
	float a,b;
	int c;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("HESAP MAKÝNESÝ");
	
	printf("\n1.sayýyý giriniz:");
	scanf("%f",&a);
	
	printf("\n2.sayýyý giriniz:");
	scanf("%f",&b);
	
	printf("%s %s %s %s %s %s","Yapmak istediðiniz iþlemi seçiniz\n\n","Toplama için 1'e basýnýz.\n","çýkarma için 2'ye basýnýz.\n","Çarpma için 3'e basýnýz.\n","Bölme için 4'e basýnýz.\n","\nSeçiminiz:");
	
	scanf("%d",&c);
	
	printf("Sonuç:");
	
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
