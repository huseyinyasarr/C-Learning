#include<stdio.h>
#include<locale.h>

//çok boyutlu arraylerin fonksiyona gönderimi ve fonksyionda yazýmý


void yaz(int dizi[][5],int boyut) { //satýr boyutunu ayrý bir þekilde tanýmlamamýz gerekiyor. Ancak sütunu direkt olarak yazmamýz gerekiyor.

	int i,j;
	
	for(i=0; i<boyut; ++i) { //C programlama dilinden ötürü dizinin ilk boyutunu main bölümünden alýyoruz. Bunun için sayý yerine "boyut" koyuyoruz.
		
		for(j=0; j<=4; ++j) {
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
		
	}
	
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	int matris[3][5]; //matrisimizin boyutunu belirtiyoruz.
	int i, j;
	
	printf("3x5'lik dizinizi giriniz:\n");
	
	for(i=0; i<=2; ++i) {
		for(j=0; j<=4; ++j) {
			scanf("%d",&matris[i][j]);
		}
		
	}
	
	yaz(matris,3); //"matrisi(array)" ve matrisin satýr boyutunu fonksiyona yolluyoruz.
	
	
	
	
	
	
	
	
	return 0;
}
