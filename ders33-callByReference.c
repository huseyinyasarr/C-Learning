#include<stdio.h>
#include<locale.h>

void degistir(int *a,int *b) { //pointer g�nderilece�i i�in de�i�kenlerin ba��nda " * " var
	
	int gecici;
	gecici = *a;
	*a = *b;
	*b = gecici;
	
}


int main() {
	setlocale(LC_ALL,"Turkish");
	int x=5,y=10;
	
	degistir(&x,&y); //biz x ile y'yi g�ndeririken asl�nda onlar�n adreslerini yolluyoruz ki yerlerini de�i�tirebilelim. Adres yollarkende " & " kullan�yoruz.
	
	
	printf("x=%d\ny=%d",x,y);
	
	
	
	
	
	
	return 0;
}
