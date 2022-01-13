#include<stdio.h>
#include<locale.h>
#include<string.h> //strlen (karakter uzunluðu) fonksiyonunu içeren kütüphanedir.

//bu koddun amacý, yazýlan kelimey,, tes çevirmektir.

void tersCevir(char dizi[]) {
	int i, uzunluk, gecici;
	
	uzunluk = strlen(dizi); //strlen, karakterin uzunluðunu bize söyler. Örnek olarak karakterin uzunluðu 7 olsun.
	
	for (i=0; i<uzunluk/2; ++i) { //krelimenin uzunluðunun yarýsý kadar dönecek. Bu da kelimenin ortasýný bize bulur. i<3,5 olur.
		gecici = dizi[i]; //gecici'yi, dizinin i'inci karakterine (0 dan baþlayýp kelimenin ortasýna kadar gelecek) eþitler. (dizinin ilk karakteri) i=0 olur.
		dizi[i] = dizi[uzunluk-1-i]; /*dizinin (uzunluk-1= dizilerde 7 harflik bir kelimenin sonuncu karakteri dizi[6] olduðundan) 
		son harfini ilk harfine eþitler. -i'nin mantýðý ise her döngüde bir sonraki/önceki harfe geçebilmek içindir*/
		
		dizi[uzunluk-1-i] = gecici; //gecici'yi, dizi[uzunluk-1-i]'ye eþitleyip bir sonraki döngüde bir sonraki harfe geçebilmek için bunu yaptýk.
		
		//bu döngü algoritmaya dayalý bir durumdur. Çalýþýlmasý gerekiliyor.
	}
	
	
}

int main() {
	
	
	char kelime[200]; //uzunluðu max. 200 olabilecek olan dizi oluþturdum.
		
	printf("kelime giriniz: ");
	scanf("%s",&kelime); //diziyi doldurmasýný istedim.
	tersCevir(kelime); //girilen diziyi yazdýðým fonksiyona gönderdim ve fonksiyon, yazýlan kelimeyi tersine çevirdi.
	printf("%s",kelime); //fonksiyondan gidip gelen dizi terse dönmüþtür ve artýk ters olarak ekrana yazýlýr.
	
	
	return 0;
}
