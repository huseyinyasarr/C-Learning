#include<stdio.h>
#include<locale.h>

/*

if() --------> parantez içerisine yazýlan þart saðlanýrsa süslü parantezin içine girer.
else if() ---> if'in içine yazýlan koþul ile else if parantezinin içine yazýlan koþulun arasonýnda deðer aldýðý zaman else if'in içine girer.
else() ------> if, else if þartlarýndan hiçbiri saðlanmazsa o zaman else'ye girer.

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
	printf("ders ortalamanýz: %.2f",dersort);
	
	if(dersort >= 60) {
		
		printf("\ndersi geçtiniz");
	}
	
	else if(dersort >= 50) {
		
	
		
		printf("\ndönem ortalamanýzý giriniz:");
		scanf("%f",&ort);
		
		printf("\nbüte kaldýnýz.");
		
		if(ort < 2.5) {
			printf("\nbütü geçseniz dahi seneye bu dersi almak zorundasýnýz.");
		}
	}
	
	else {
		
		printf("kaldýnýz.");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
