#include<stdio.h>
#include<locale.h>




int main() {
	
	
	int a,b,c,toplam,hane;
	
	while(a<2) {
	
	toplam = hane = 0;
		
	setlocale(LC_ALL, "Turkish");
	printf("say� giriniz: ");
	scanf("%d",&c);
	
	while(c>0) {
		
		toplam = toplam + (c%10);
		++hane;
		c = c/10;
		
		
		
	}
	
	printf("rakamlar toplam�: %d\nrakam say�s�: %d",toplam,hane);
	
	
	
	printf("\n\ntekrar etmek i�in 1, kapatmak i�in 2: ");
	scanf("%d",&a);

}
	
	return 0;
}

