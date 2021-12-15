#include<stdio.h>
#include<locale.h>



int main() {
	
	int pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar,gun,ogun,kalori,yemek,yemek1,yemek2,yemek3,ogun1Kalori;
	float protein,karb,yag;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Gün seçiniz");
	printf("%s %s %s %s %s %s %s","\n1.Pazartesi","\n2.Salý","\n3.Çarþamba","\n4.Perþembe","\n5.Cuma","\n6.Cumartesi","\n7.Pazar\n");
	scanf("%d",&gun);
	
	if(gun==1) {
		
		printf("Öðün Seçiniz\n");
		printf("%s %s %s %s","1.Sabah\n","2.Öðle\n","3.Akþam\n","4.Ara Öðün\n");
		scanf("%d",&ogun);
		
		if(ogun==1) {
			
			printf("Yemek Seçiniz\n");
			printf("%s %s %s","1.Yemek\n","2.Yemek\n","3.Yemek\n");
			scanf("%d",&yemek);
			
			if(yemek==1) {
				
				printf("Kalori Giriniz: ");
				scanf("%d",kalori);
				yemek1= kalori;
				printf("Geri gelmek için '0' basýnýz.");
				
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
			printf("Yað Giriniz: ");
			scanf("%d",&yag);
	*/
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	return 0;
}
