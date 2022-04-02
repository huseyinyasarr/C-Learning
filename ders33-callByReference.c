#include<stdio.h>
#include<locale.h>

void degistir(int *a,int *b) { //pointer gönderileceði için deðiþkenlerin baþýnda " * " var
	
	int gecici;
	gecici = *a;
	*a = *b;
	*b = gecici;
	
}


int main() {
	setlocale(LC_ALL,"Turkish");
	int x=5,y=10;
	
	degistir(&x,&y); //biz x ile y'yi göndeririken aslýnda onlarýn adreslerini yolluyoruz ki yerlerini deðiþtirebilelim. Adres yollarkende " & " kullanýyoruz.
	
	
	printf("x=%d\ny=%d",x,y);
	
	
	
	
	
	
	return 0;
}
