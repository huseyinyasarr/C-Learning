#include<stdio.h>
#include<locale.h>


int main() {
	
	int bakiye,tutar,islem;
	bakiye=1000;	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("BANKAYA HO� GELD�N�Z\n 1:Bakiye Sorgu\n 2:Para Yat�rma\n 3:Para �ekme \n 4:Para Havale\n 5:Kart �ade\n");
	scanf("%d",&islem);
	
	
	switch (islem) {   //"islem" ile ald���n�z say�ya g�re bunun i�indeki case'e girerek oradaki kodlar� �al��t�r�r.
		
	case 1:
		printf("Bakiyeniz %d",bakiye);
		break; //bu yaz� bu case i�lemi bittikten sonra ba�ka case'ye girmeden bu switch'i terk etmeye yarar.
		
			
	case 2:
		printf("Bakiyeniz %d \nYat�rmak istedi�iniz tutar� giriniz: ",bakiye);
		scanf("%d",&tutar);
	
		bakiye = bakiye + tutar;
		
		printf("Kalan Bakiyeniz %d",bakiye);		
		break;	
			
		
	case 3:
		printf("Bakiyeniz %d \n�ekmek istedi�iniz tutar� giriniz: ",bakiye);
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
	
		printf("Bakiyeniz %d \nHavale etmek istedi�iniz tutar� giriniz: ",bakiye);
		scanf("%d",&tutar);
		if (bakiye<tutar) {
			printf("Yetersiz bakiye");
		}
		else {
			bakiye = bakiye - tutar;
		
		printf("��leminiz ba�ar�yla ger�ekle�tirilmi�tir.\nKalan Bakiyeniz %d",bakiye);	
		break;		
			
		}
				
		
	case 5:
		printf("Kart�n�z iade ediliyor...");
		break;
		
	default:    //yukar�daki tan�mlanan islemlerin d���nda bir i�lem yap�l�rsa buradaki case'e girer. else mant���ndad�r.
		printf("Hatal� i�lem ger�ekle�tirdiniz!");
		break;
		
	}
	

	
	printf("\n\nBu deneme yaz�s�d�r");
	
	
	
	
	
	return 0;
}
