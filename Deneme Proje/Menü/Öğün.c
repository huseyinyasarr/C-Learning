#include<stdio.h>
#include<locale.h>


int main() {
	
	int kahvalti,ogle,aksam,menu,kmenu,omenu,amenu,cevap;
	int bakiye,fiyat,adet,ekle;
	bakiye = 100;
	int w;
	w = 1;

while(w <2) {

	setlocale(LC_ALL, "Turkish");
	
	printf("Girmek Ýstediðiniz Menüyü Seçiniz\n\n1:Kahvaltý\n2:Öðle Yemeði\n3:Akþam Yemeði\n4:Bakiye\n5:Nakit yükle\n");
	scanf("%d",&menu);
	
	switch(menu) {
		
		case 5:
			printf("Bakiye: %d\n",bakiye);
			printf("eklemek istediðiniz miktarý giriniz: ");
			scanf("%d",&ekle);
			bakiye = ekle + bakiye;
		
		case 4:
			printf("Bakiye: %d\n",bakiye);
			
		
		case 1:
			printf("\nKAHVALTI\n");
			printf("1:Çay\n2:Börek\n3:Beyaz Peynir\n4:Kaþar Peynir\n5:Geri\n");
			scanf("%d",&kmenu);
			
			switch(kmenu) {
				case 1:
					printf("Kalan Bakiyeniz: %d\n\n",bakiye);
					printf("Çay: 5TL Almak için 1, ipttal için 2, uygulamadan çýkmak için 3\n");
					scanf("%d",&cevap);
					
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 5;
					fiyat =	fiyat*adet;				
					
					if(cevap==1 && bakiye>=fiyat) {
						
						
						printf("%d adet Satýn Aldýnýz\n",adet);						
						bakiye = bakiye - fiyat;			
						
					}
					else if(cevap==2) {
						printf("Çay Almadýnýz\n");
					}
					else if(cevap==3) {
						break;
					}
					else {
						printf("Yetersiz Bakiye\n");
						break;
					}
					
				case 2:
					printf("Kalan Bakiyeniz: %d\n\n",bakiye);
					printf("Börek: 15TL Almak için 1, ipttal için 2, çýkmak için 3\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 15;
					fiyat =	fiyat*adet;				
					
					if(cevap==1 && bakiye>=fiyat) {
						
						
						printf("%d adet Satýn Aldýnýz\n",adet);						
						bakiye = bakiye - fiyat;			
						
					}
					else if(cevap==3) {
						break;
					}
					
					else if(cevap==2) {
						printf("Börek Almadýnýz\n");
					}
					else {
						printf("Yetersiz Bakiye\n");
						break;
					}
					case 3:
						printf("Kalan Bakiyeniz: %d\n\n",bakiye);
						printf("Beyaz Peynir: 15TL Almak için 1, ipttal için 2, çýkmak için3\n");
						scanf("%d",&cevap);
						printf("satýn almak istediðiniz adedi giriniz: ");
						scanf("%d",&adet);
						fiyat = 15;
						fiyat =	fiyat*adet;	
						
						if(cevap==3) {
						break;
						}			
					
						else if(cevap==1 && bakiye>=fiyat) {
						
						
							printf("%d adet Satýn Aldýnýz\n",adet);						
							bakiye = bakiye - fiyat;			
						
						}
						else if(cevap==2) {
							printf("Beyaz Peynir Almadýnýz\n");
						}
						else {
							printf("Yetersiz Bakiye\n");
							break;
						}
						case 4:
							printf("Kalan Bakiyeniz: %d\n\n",bakiye);
							printf("Kaþar Peyniri: 15TL Almak için 1, ipttal için 2, çýkmak için 3\n");
							scanf("%d",&cevap);
							printf("satýn almak istediðiniz adedi giriniz: ");
							scanf("%d",&adet);
							fiyat = 15;
							fiyat =	fiyat*adet;	
							
							if(cevap==3) {
							break;
							}			
					
							else if(cevap==1 && bakiye>=fiyat) {
						
						
								printf("%d adet Satýn Aldýnýz\n",adet);						
								bakiye = bakiye - fiyat;			
						
							}
							else if(cevap==2) {
								printf("Kaþar Peyniri Almadýnýz\n");
							}
							else {
								printf("Yetersiz Bakiye\n");
								break;
							}
						case 5:
							break;
					break;
			}
		
			printf("Kalan Bakiyeniz: %d\n",bakiye);
			
		case 2:
			printf("\nÖÐLE YEMEÐÝ\n");
			printf("1:Mercimek\n2:Fasülye\n3:Pilav\n4:Geri\n");
			scanf("%d",&omenu);
			
			switch(omenu) {
				
				case 1:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Mercimek: 14 TL Almak için 1, iptal için 2, çýkmak için 3\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 14;
					fiyat = fiyat*adet;
					
					if(cevap==3) {
						break;
					}
					
					else if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet satýn aldýnýz.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Satýn almadýnýz.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 2:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Fasulye: 18 TL Almak için 1, iptal için 2, çýkmak için 3\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 18;
					fiyat = fiyat*adet;
					
					if(cevap==3) {
						break;
					}
					
					else if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet satýn aldýnýz.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Satýn almadýnýz.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 3:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Pilav: 15 TL Almak için 1, iptal için 2, çýkmak için 3\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 15;
					fiyat = fiyat*adet;
					
					if(cevap==3) {
						break;
					}
					
					else if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet satýn aldýnýz.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Satýn almadýnýz.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 4:
					break;
					
				default:
					break;
					
					
			}
			printf("Kalan Bakiyeniz: %d\n",bakiye);
				
				
		case 3:
			printf("\nAKÞAM YEMEÐÝ\n");
			printf("1:Ezogelin\n2:Tavuk\n3:Makarna\n4:Geri\n");
			scanf("%d",&amenu);
			
			switch(amenu) {
				
				case 1:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Ezogelin: 14 TL Almak için 1, iptal için 2\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 14;
					fiyat = fiyat*adet;
					
					if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet satýn aldýnýz.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Satýn almadýnýz.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 2:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Tavuk: 21 TL Almak için 1, iptal için 2\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 21;
					fiyat = fiyat*adet;
					
					if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet satýn aldýnýz.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Satýn almadýnýz.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
				case 3:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Makarna: 16 TL Almak için 1, iptal için 2\n");
					scanf("%d",&cevap);
					printf("satýn almak istediðiniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 16;
					fiyat = fiyat*adet;
					
					if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet satýn aldýnýz.\n",adet);
						bakiye = bakiye - fiyat;
						printf("Kalan Bakiyeniz: %d\n",bakiye);
					}			
					else if(cevap == 2) {
						printf("Satýn almadýnýz.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					
				case 4:
					break;
				
				
				
			}
				
				
		
				
			}		
	
		
		
	


		

		printf("\n\nUygulamada kalmak için 1, çýkmak için 2\n");
		scanf("%d",&w);
		
		


}

	
	
	
	return 0;
}
