#include<stdio.h>
#include<locale.h>
#include<stdbool.h> //true sonsuz d�ng�s�n�n k�t�phanesi

/*

	for (i = 1; true; ++i) yapt���n�zda true bu d�nng�y� break'lemedikten sonra sonsuz d�nece�i anlam�na gelir.

*/



int main() {
	
	int sonuc;
	sonuc = 0;
	int girdi, i, a;
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("1:Toplama/��karma\n2:�arpma\n");
	scanf("%d",&a);
	
	while (a==1) {
		girdi = 0;
		sonuc = 0;
		for (i=0; true; i+=1) {
			printf("Toplamak i�in say� girniz '��karmak istedi�iniz say�n�n �n�ne - koyunuz'(��kmak i�in -1'e bas�n�z'): ");
			scanf("%d",&girdi);
			
			if(girdi==-1) {
				break;
			}
			
			sonuc = sonuc + girdi;
			
		}
	
			printf("%d",sonuc);
		    printf("\n��kmak i�in 2, tekrar i�in 1: ");
		    scanf("%d",&a);
	
	}
	
	while (a==2) {
		girdi = 0;
		sonuc = 1;
		for (i=0; true; i+=1) {
			printf("�arpmak i�in say� girniz (��kmak i�in -1'e bas�n�z'): ");
			scanf("%d",&girdi);
			
			if(girdi==-1) {
				break;
			}
			
			sonuc = sonuc * girdi;
			
		}
	
			printf("%d",sonuc);
		    printf("\n��kmak i�in 1, tekrar i�in 2: ");
		    scanf("%d",&a);
	
	}

		
	
	
	
	
	return 0;
}
