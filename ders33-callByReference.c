#include<stdio.h>
#include<locale.h>

void degistir(int *a,int *b) { //pointer gönderileceği için değişkenlerin başında " * " var
	
	int gecici;
	gecici = *a;
	*a = *b;
	*b = gecici;
	
}


int main() {
	setlocale(LC_ALL,"Turkish");
	int x=5,y=10;
	
	degistir(&x,&y); //biz x ile y'yi göndeririken aslında onların adreslerini yolluyoruz ki yerlerini değiştirebilelim. Adres yollarkende " & " kullanıyoruz.
	
	
	printf("x=%d\ny=%d",x,y);
	
	
	
	
	
	
	return 0;
}
