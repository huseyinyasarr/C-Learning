#include<stdio.h>
#include<locale.h>




int main() {
	
	
	int a,b,c,toplam,hane;
	
	while(a<2) {
	
	toplam = hane = 0;
		
	setlocale(LC_ALL, "Turkish");
	printf("sayý giriniz: ");
	scanf("%d",&c);
	
	while(c>0) {
		
		toplam = toplam + (c%10);
		++hane;
		c = c/10;
		
		
		
	}
	
	printf("rakamlar toplamý: %d\nrakam sayýsý: %d",toplam,hane);
	
	
	
	printf("\n\ntekrar etmek için 1, kapatmak için 2: ");
	scanf("%d",&a);

}
	
	return 0;
}

