#include<stdio.h>
#include<locale.h>



int main() {
	
	/*
	do döngüsünü görünce içine girer ve iþlemi yapar. sonrasýnda while þartý kontrol edilir.
	þart doðruysa tekrardan do döner. while döngüsü ne zaman saðlanmazsa while'ýn içindeki gerçekleþir.
		
	*/
	
	
	int a,b,toplam,hane;
	while(b<2) {
	toplam = 0;
	hane = 0;
	
	setlocale(LC_ALL, "Turkish");
	
	
	printf("sayý giriniz: ");
	scanf("%d",&a);
	
	do {
		
		toplam = toplam + (a%10); //sayý 123 olsun. 123'ün son basanaðýný alýr (3) ve toplama atar. Ýkinci seferde sayý 12 olarak gelir ve 12'nin 10'a bölümünden kalan 2 olacaðýndan 2'yi alýr ve böyle devam eder.
		++hane; //döngü bitene kadar sayaç görevi görür.
		a = a/10; //123 sayýsýný int olarak 10'a böler ve her seferinde son basamaðý siler. Ýkinci geliþte sayý 12 olarak gelir.
		

		
	}
	while(a>0);
	
		printf("rakamlar yoplamý: %d \nhane sayýsý: %d",toplam,hane);
	
	
	printf("\nçýkmak için 2 tekrar için 1\n");
	scanf("%d",&b);
	
	
}
	
	return 0;
}
