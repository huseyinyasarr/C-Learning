#include<stdio.h>
#include<locale.h>



int main() {
	
	int pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar,gun,ogun,kalori,yemek,yemek1,yemek2,yemek3,ogun1Kalori;
	float protein,karb,yag;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("G�n se�iniz");
	printf("%s %s %s %s %s %s %s","\n1.Pazartesi","\n2.Sal�","\n3.�ar�amba","\n4.Per�embe","\n5.Cuma","\n6.Cumartesi","\n7.Pazar\n");
	scanf("%d",&gun);
	
	if(gun==1) {
		
		printf("���n Se�iniz\n");
		printf("%s %s %s %s","1.Sabah\n","2.��le\n","3.Ak�am\n","4.Ara ���n\n");
		scanf("%d",&ogun);
		
		if(ogun==1) {
			
			printf("Yemek Se�iniz\n");
			printf("%s %s %s","1.Yemek\n","2.Yemek\n","3.Yemek\n");
			scanf("%d",&yemek);
			
			if(yemek==1) {
				
				printf("Kalori Giriniz: ");
				scanf("%d",kalori);
				yemek1= kalori;
				printf("Geri gelmek i�in '0' bas�n�z.");
				
			}
			else if(yemek==2) {
				printf("Kalori Giriniz: ");
				scanf("%d",kalori);
				yemek2= kalori;
			}
			
			else if(yemek==3) {
				printf("Kalori Giriniz: ");
				scanf("%d",kalori);
				yemek3= kalori;
				
			}
			ogun1Kalori = yemek1 + yemek2 + yemek3;
			
			printf("Toplam Kalori: %d",ogun1Kalori);
			
			
			
		}
		
	}
	
	/*
		printf("Kalori Giriniz: ");
			scanf("%d",&kalori);
			printf("Karbonhidrat Giriniz: ");
			scanf("%d",&karb);
			printf("Protein Giriniz: ");
			scanf("%d",&protein);
			printf("Ya� Giriniz: ");
			scanf("%d",&yag);
	*/
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	return 0;
}
