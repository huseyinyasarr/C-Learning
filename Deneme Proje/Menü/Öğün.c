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
	
	printf("Girmek �stedi�iniz Men�y� Se�iniz\n\n1:Kahvalt�\n2:��le Yeme�i\n3:Ak�am Yeme�i\n4:Bakiye\n5:Nakit y�kle\n");
	scanf("%d",&menu);
	
	switch(menu) {
		
		case 5:
			printf("Bakiye: %d\n",bakiye);
			printf("eklemek istedi�iniz miktar� giriniz: ");
			scanf("%d",&ekle);
			bakiye = ekle + bakiye;
		
		case 4:
			printf("Bakiye: %d\n",bakiye);
			
		
		case 1:
			printf("\nKAHVALTI\n");
			printf("1:�ay\n2:B�rek\n3:Beyaz Peynir\n4:Ka�ar Peynir\n5:Geri\n");
			scanf("%d",&kmenu);
			
			switch(kmenu) {
				case 1:
					printf("Kalan Bakiyeniz: %d\n\n",bakiye);
					printf("�ay: 5TL Almak i�in 1, ipttal i�in 2, uygulamadan ��kmak i�in 3\n");
					scanf("%d",&cevap);
					
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 5;
					fiyat =	fiyat*adet;				
					
					if(cevap==1 && bakiye>=fiyat) {
						
						
						printf("%d adet Sat�n Ald�n�z\n",adet);						
						bakiye = bakiye - fiyat;			
						
					}
					else if(cevap==2) {
						printf("�ay Almad�n�z\n");
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
					printf("B�rek: 15TL Almak i�in 1, ipttal i�in 2, ��kmak i�in 3\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 15;
					fiyat =	fiyat*adet;				
					
					if(cevap==1 && bakiye>=fiyat) {
						
						
						printf("%d adet Sat�n Ald�n�z\n",adet);						
						bakiye = bakiye - fiyat;			
						
					}
					else if(cevap==3) {
						break;
					}
					
					else if(cevap==2) {
						printf("B�rek Almad�n�z\n");
					}
					else {
						printf("Yetersiz Bakiye\n");
						break;
					}
					case 3:
						printf("Kalan Bakiyeniz: %d\n\n",bakiye);
						printf("Beyaz Peynir: 15TL Almak i�in 1, ipttal i�in 2, ��kmak i�in3\n");
						scanf("%d",&cevap);
						printf("sat�n almak istedi�iniz adedi giriniz: ");
						scanf("%d",&adet);
						fiyat = 15;
						fiyat =	fiyat*adet;	
						
						if(cevap==3) {
						break;
						}			
					
						else if(cevap==1 && bakiye>=fiyat) {
						
						
							printf("%d adet Sat�n Ald�n�z\n",adet);						
							bakiye = bakiye - fiyat;			
						
						}
						else if(cevap==2) {
							printf("Beyaz Peynir Almad�n�z\n");
						}
						else {
							printf("Yetersiz Bakiye\n");
							break;
						}
						case 4:
							printf("Kalan Bakiyeniz: %d\n\n",bakiye);
							printf("Ka�ar Peyniri: 15TL Almak i�in 1, ipttal i�in 2, ��kmak i�in 3\n");
							scanf("%d",&cevap);
							printf("sat�n almak istedi�iniz adedi giriniz: ");
							scanf("%d",&adet);
							fiyat = 15;
							fiyat =	fiyat*adet;	
							
							if(cevap==3) {
							break;
							}			
					
							else if(cevap==1 && bakiye>=fiyat) {
						
						
								printf("%d adet Sat�n Ald�n�z\n",adet);						
								bakiye = bakiye - fiyat;			
						
							}
							else if(cevap==2) {
								printf("Ka�ar Peyniri Almad�n�z\n");
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
			printf("\n��LE YEME��\n");
			printf("1:Mercimek\n2:Fas�lye\n3:Pilav\n4:Geri\n");
			scanf("%d",&omenu);
			
			switch(omenu) {
				
				case 1:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Mercimek: 14 TL Almak i�in 1, iptal i�in 2, ��kmak i�in 3\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 14;
					fiyat = fiyat*adet;
					
					if(cevap==3) {
						break;
					}
					
					else if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet sat�n ald�n�z.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Sat�n almad�n�z.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 2:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Fasulye: 18 TL Almak i�in 1, iptal i�in 2, ��kmak i�in 3\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 18;
					fiyat = fiyat*adet;
					
					if(cevap==3) {
						break;
					}
					
					else if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet sat�n ald�n�z.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Sat�n almad�n�z.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 3:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Pilav: 15 TL Almak i�in 1, iptal i�in 2, ��kmak i�in 3\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 15;
					fiyat = fiyat*adet;
					
					if(cevap==3) {
						break;
					}
					
					else if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet sat�n ald�n�z.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Sat�n almad�n�z.\n");
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
			printf("\nAK�AM YEME��\n");
			printf("1:Ezogelin\n2:Tavuk\n3:Makarna\n4:Geri\n");
			scanf("%d",&amenu);
			
			switch(amenu) {
				
				case 1:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Ezogelin: 14 TL Almak i�in 1, iptal i�in 2\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 14;
					fiyat = fiyat*adet;
					
					if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet sat�n ald�n�z.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Sat�n almad�n�z.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
					
				case 2:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Tavuk: 21 TL Almak i�in 1, iptal i�in 2\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 21;
					fiyat = fiyat*adet;
					
					if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet sat�n ald�n�z.\n",adet);
						bakiye = bakiye - fiyat;
					}			
					else if(cevap == 2) {
						printf("Sat�n almad�n�z.\n");
					}	
					else {
						printf("Yetersiz bakiye");
						break;
					}
				case 3:
					printf("Kalan Bakiyeniz: %d\n",bakiye);
					printf("Makarna: 16 TL Almak i�in 1, iptal i�in 2\n");
					scanf("%d",&cevap);
					printf("sat�n almak istedi�iniz adedi giriniz: ");
					scanf("%d",&adet);
					fiyat = 16;
					fiyat = fiyat*adet;
					
					if(cevap==1 && bakiye>=fiyat) {
						printf("%d adet sat�n ald�n�z.\n",adet);
						bakiye = bakiye - fiyat;
						printf("Kalan Bakiyeniz: %d\n",bakiye);
					}			
					else if(cevap == 2) {
						printf("Sat�n almad�n�z.\n");
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
	
		
		
	


		

		printf("\n\nUygulamada kalmak i�in 1, ��kmak i�in 2\n");
		scanf("%d",&w);
		
		


}

	
	
	
	return 0;
}
