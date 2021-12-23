#include<stdio.h>
#include<locale.h>
#include<stdbool.h> //true sonsuz döngüsünün kütüphanesi

/*

	for (i = 1; true; ++i) yaptýðýnýzda true bu dönngüyü break'lemedikten sonra sonsuz döneceði anlamýna gelir.

*/



int main() {
	
	int sonuc;
	sonuc = 0;
	int girdi, i, a;
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("1:Toplama/çýkarma\n2:Çarpma\n");
	scanf("%d",&a);
	
	while (a==1) {
		girdi = 0;
		sonuc = 0;
		for (i=0; true; i+=1) {
			printf("Toplamak için sayý girniz 'çýkarmak istediðiniz sayýnýn önüne - koyunuz'(çýkmak için -1'e basýnýz'): ");
			scanf("%d",&girdi);
			
			if(girdi==-1) {
				break;
			}
			
			sonuc = sonuc + girdi;
			
		}
	
			printf("%d",sonuc);
		    printf("\nÇýkmak için 2, tekrar için 1: ");
		    scanf("%d",&a);
	
	}
	
	while (a==2) {
		girdi = 0;
		sonuc = 1;
		for (i=0; true; i+=1) {
			printf("Çarpmak için sayý girniz (çýkmak için -1'e basýnýz'): ");
			scanf("%d",&girdi);
			
			if(girdi==-1) {
				break;
			}
			
			sonuc = sonuc * girdi;
			
		}
	
			printf("%d",sonuc);
		    printf("\nÇýkmak için 1, tekrar için 2: ");
		    scanf("%d",&a);
	
	}

		
	
	
	
	
	return 0;
}
