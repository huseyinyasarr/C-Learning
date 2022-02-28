#include<locale.h>
#include<stdio.h>

int enBuyukSayi(int *a,int uzunluk) {
	
	int enBuyuk = *a;
	int i;
	
	for(i=1; i < uzunluk; ++i) {
		
		if (*(a+i) > enBuyuk) {
		
		enBuyuk = *(a+i);
		}
	}
	
	return enBuyuk;
}




int main() {
	setlocale(LC_ALL,"Turkish");
	
	int sayilar[5] = {1,5,712,3331,96};
	

	int buyuk;
	
	buyuk = enBuyukSayi(sayilar,5);
	
	printf("en büyük sayý: %d",buyuk);
	
	
	
	
	
	
	
	
	return 0;
}
