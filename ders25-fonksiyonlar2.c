#include <stdio.h>
#include <locale.h>

int faktoriyel(int sayi) {
	
	int fakt;
	fakt=1;
	
	for(/*burayý boþ býrakýyoruz çünkü sayi sonradan girilen herhangi bir sayýdýr*/; sayi>0;--sayi) {
		
		fakt = fakt*sayi;		
	
		
	}
	
//	printf("%d",fakt);	
	return fakt; //main'in içinde çalýþabilmesi için bunu yazmak gerekiyor.
	
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	int n;
	
	printf("Faktöriyelini hesaplamak istediðiniz sayýyý giriniz: ");
	scanf("%d",&n);
	
//	faktoriyel(n);	
	
	printf("%d",faktoriyel(n));
	
	
	
	return 0;
}
