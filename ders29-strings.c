#include<stdio.h>
#include<locale.h>

/*
harf PARS karakterleri belle�e �u �ekilde yerle�tirilir.

'P'
'A'
'R'
'S'
'\0'     harf karakterlerinin sonuna bu karakter (null) gelerek kelimenin bitti�ini anlar.

bu bahsedilen olay sadece karakter dizileri i�in ge�erlidir. Say�larda bu durum yoktur.
*/

int uzunlukFonk(char name[]) {
	int i;
	int uzunluk = 0;
	
	for (i=0; name[i] !='\0'; ++i) { // 11.sat�rdaki yorumdan �t�r� bu d�ng� bu �ekilde yaz�lm��t�r.
		uzunluk++;		
	}
	
	return uzunluk;
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	char isim[20]; //sonradan doldurulacak arraylerin bellekte kaplayaca�� uzunlu�u belirtmek zorundas�n.
	printf("�sminizi giriniz: ");
	scanf("%s",&isim); //scanf ile array doldurulmas�n� istiyorsan [] parantez koymamak gereiyor.
		
	printf("�sminizin uzunlu�u %d 'dir.",uzunlukFonk(isim)); //33.sat�rdaki yorum ile ayn� durum burada da vard�r.
	
	
	
	return 0;
}
