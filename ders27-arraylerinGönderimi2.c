#include<stdio.h>
#include<locale.h>

//�ok boyutlu arraylerin fonksiyona g�nderimi ve fonksyionda yaz�m�


void yaz(int dizi[][5],int boyut) { //sat�r boyutunu ayr� bir �ekilde tan�mlamam�z gerekiyor. Ancak s�tunu direkt olarak yazmam�z gerekiyor.

	int i,j;
	
	for(i=0; i<boyut; ++i) { //C programlama dilinden �t�r� dizinin ilk boyutunu main b�l�m�nden al�yoruz. Bunun i�in say� yerine "boyut" koyuyoruz.
		
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
	
	yaz(matris,3); //"matrisi(array)" ve matrisin sat�r boyutunu fonksiyona yolluyoruz.
	
	
	
	
	
	
	
	
	return 0;
}
