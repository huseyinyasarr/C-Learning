#include<stdio.h>
#include <locale.h>


int main() {
	
	
	
	int not1,not2,gecNot;
	float ort,yuz1,yuz2;
	
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Ders notu hesaplama");
	printf("\n2.s�nav notunuz 60 puan�n alt�ndaysa dersten kal�rs�n�z");
	printf("\nGe�me notunu yaz�n�z:");
	scanf("%d",&gecNot);
	
	printf("\n1.notunuzu giriniz:");
	scanf("%d",&not1);
	printf("1.s�nav�n al�nacak y�zdesi:");
	scanf("%f",&yuz1);
	
	printf("\n2.notunuzu giriniz:");
	scanf("%d",&not2);
	printf("2.s�nav�n al�nacak y�zdesi:");
	scanf("%f",&yuz2);
	
	yuz1 = not1*yuz1/100.0;
	yuz2 = not2*yuz2/100.0;
	
	
	ort = yuz1+yuz2;
	printf("Not ortalaman�z %.2f\n",ort);
	
	
	
	if(ort>=gecNot) {
		
		if(not2<60) {
		
		
		printf("2.S�nav notunuz 60 puandan d���k oldu�u i�in dersten kald�n�z.");
		
	}
		else{
		
		printf("Ge�tiniz");	
			
		}
		
	}
	
	else {
		
		
		printf("kald�n�z.");
		
	}
	
	
	
	
	
	
	return 0;
}
