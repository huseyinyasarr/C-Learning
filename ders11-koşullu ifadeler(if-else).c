#include<stdio.h>
#include<locale.h>

/*

if() --------> parantez i�erisine yaz�lan �art sa�lan�rsa s�sl� parantezin i�ine girer.
else if() ---> if'in i�ine yaz�lan ko�ul ile else if parantezinin i�ine yaz�lan ko�ulun arason�nda de�er ald��� zaman else if'in i�ine girer.
else() ------> if, else if �artlar�ndan hi�biri sa�lanmazsa o zaman else'ye girer.

*/

int main() {
	
	int vize1,vize2,final;
	float dersort,ort;

		
	setlocale(LC_ALL, "Turkish");
	
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	
	dersort = (vize1+vize2+final)/3.0;
	printf("ders ortalaman�z: %.2f",dersort);
	
	if(dersort >= 60) {
		
		printf("\ndersi ge�tiniz");
	}
	
	else if(dersort >= 50) {
		
	
		
		printf("\nd�nem ortalaman�z� giriniz:");
		scanf("%f",&ort);
		
		printf("\nb�te kald�n�z.");
		
		if(ort < 2.5) {
			printf("\nb�t� ge�seniz dahi seneye bu dersi almak zorundas�n�z.");
		}
	}
	
	else {
		
		printf("kald�n�z.");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
