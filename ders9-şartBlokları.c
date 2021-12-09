#include<stdio.h>
#include <locale.h>


int main() {
	
	
	
	int not1,not2,gecNot;
	float ort,yuz1,yuz2;
	
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Ders notu hesaplama");
	printf("\n2.sýnav notunuz 60 puanýn altýndaysa dersten kalýrsýnýz");
	printf("\nGeçme notunu yazýnýz:");
	scanf("%d",&gecNot);
	
	printf("\n1.notunuzu giriniz:");
	scanf("%d",&not1);
	printf("1.sýnavýn alýnacak yüzdesi:");
	scanf("%f",&yuz1);
	
	printf("\n2.notunuzu giriniz:");
	scanf("%d",&not2);
	printf("2.sýnavýn alýnacak yüzdesi:");
	scanf("%f",&yuz2);
	
	yuz1 = not1*yuz1/100.0;
	yuz2 = not2*yuz2/100.0;
	
	
	ort = yuz1+yuz2;
	printf("Not ortalamanýz %.2f\n",ort);
	
	
	
	if(ort>=gecNot) {
		
		if(not2<60) {
		
		
		printf("2.Sýnav notunuz 60 puandan düþük olduðu için dersten kaldýnýz.");
		
	}
		else{
		
		printf("Geçtiniz");	
			
		}
		
	}
	
	else {
		
		
		printf("kaldýnýz.");
		
	}
	
	
	
	
	
	
	return 0;
}
