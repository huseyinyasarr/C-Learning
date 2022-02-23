#include<locale.h>
#include<stdio.h>

int carp(int matris[],int matrisinEbati) {
	
	int i,sonuc;
	sonuc = 1;
	for(i=0; i<matrisinEbati; ++i) {
		sonuc = sonuc*matris[i];
	}
	return sonuc;
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	int array[6] = {1,2,3,4,5,6};
	
	printf("%d",carp(array,6)); // 6, burada boyut bilgisi anlamýna gelir.
	
	
	
	
	
	return 0;
}
