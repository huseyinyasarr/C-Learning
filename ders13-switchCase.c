#include<stdio.h>
#include<locale.h>


int main() {
	
	int bakiye,tutar,islem;
	bakiye=1000;	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("BANKAYA HOÞ GELDÝNÝZ\n 1:Bakiye Sorgu\n 2:Para Yatýrma\n 3:Para Çekme \n 4:Para Havale\n 5:Kart Ýade\n");
	scanf("%d",&islem);
	
	
	switch (islem) {   //"islem" ile aldýðýnýz sayýya göre bunun içindeki case'e girerek oradaki kodlarý çalýþtýrýr.
		
	case 1:
		printf("Bakiyeniz %d",bakiye);
		break; //bu yazý bu case iþlemi bittikten sonra baþka case'ye girmeden bu switch'i terk etmeye yarar.
		
			
	case 2:
		printf("Bakiyeniz %d \nYatýrmak istediðiniz tutarý giriniz: ",bakiye);
		scanf("%d",&tutar);
	
		bakiye = bakiye + tutar;
		
		printf("Kalan Bakiyeniz %d",bakiye);		
		break;	
			
		
	case 3:
		printf("Bakiyeniz %d \nÇekmek istediðiniz tutarý giriniz: ",bakiye);
		scanf("%d",&tutar);
		if (bakiye<tutar) {
			printf("Yetersiz bakiye");
		}
		else {
			bakiye = bakiye - tutar;
		
		printf("Kalan Bakiyeniz %d",bakiye);			
			
		}
		break;
	
	
	case 4:
	
		printf("Bakiyeniz %d \nHavale etmek istediðiniz tutarý giriniz: ",bakiye);
		scanf("%d",&tutar);
		if (bakiye<tutar) {
			printf("Yetersiz bakiye");
		}
		else {
			bakiye = bakiye - tutar;
		
		printf("Ýþleminiz baþarýyla gerçekleþtirilmiþtir.\nKalan Bakiyeniz %d",bakiye);	
		break;		
			
		}
				
		
	case 5:
		printf("Kartýnýz iade ediliyor...");
		break;
		
	default:    //yukarýdaki tanýmlanan islemlerin dýþýnda bir iþlem yapýlýrsa buradaki case'e girer. else mantýðýndadýr.
		printf("Hatalý iþlem gerçekleþtirdiniz!");
		break;
		
	}
	

	
	printf("\n\nBu deneme yazýsýdýr");
	
	
	
	
	
	return 0;
}
