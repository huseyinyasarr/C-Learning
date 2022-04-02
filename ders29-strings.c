#include<stdio.h>
#include<locale.h>

/*
harf PARS karakterleri belleðe þu þekilde yerleþtirilir.

'P'
'A'
'R'
'S'
'\0'     harf karakterlerinin sonuna bu karakter (null) gelerek kelimenin bittiðini anlar.

bu bahsedilen olay sadece karakter dizileri için geçerlidir. Sayýlarda bu durum yoktur.
*/

int uzunlukFonk(char name[]) {
	int i;
	int uzunluk = 0;
	
	for (i=0; name[i] !='\0'; ++i) { // 11.satýrdaki yorumdan ötürü bu döngü bu þekilde yazýlmýþtýr.
		uzunluk++;		
	}
	
	return uzunluk;
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	char isim[20]; //sonradan doldurulacak arraylerin bellekte kaplayacaðý uzunluðu belirtmek zorundasýn.
	printf("Ýsminizi giriniz: ");
	scanf("%s",&isim); //scanf ile array doldurulmasýný istiyorsan [] parantez koymamak gereiyor.
		
	printf("Ýsminizin uzunluðu %d 'dir.",uzunlukFonk(isim)); //33.satýrdaki yorum ile ayný durum burada da vardýr.
	
	
	
	return 0;
}
