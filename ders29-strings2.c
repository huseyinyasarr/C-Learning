#include<stdio.h>
#include<locale.h>
#include<string.h> //strlen (karakter uzunlu�u) fonksiyonunu i�eren k�t�phanedir.

//bu koddun amac�, yaz�lan kelimey,, tes �evirmektir.

void tersCevir(char dizi[]) {
	int i, uzunluk, gecici;
	
	uzunluk = strlen(dizi); //strlen, karakterin uzunlu�unu bize s�yler. �rnek olarak karakterin uzunlu�u 7 olsun.
	
	for (i=0; i<uzunluk/2; ++i) { //krelimenin uzunlu�unun yar�s� kadar d�necek. Bu da kelimenin ortas�n� bize bulur. i<3,5 olur.
		gecici = dizi[i]; //gecici'yi, dizinin i'inci karakterine (0 dan ba�lay�p kelimenin ortas�na kadar gelecek) e�itler. (dizinin ilk karakteri) i=0 olur.
		dizi[i] = dizi[uzunluk-1-i]; /*dizinin (uzunluk-1= dizilerde 7 harflik bir kelimenin sonuncu karakteri dizi[6] oldu�undan) 
		son harfini ilk harfine e�itler. -i'nin mant��� ise her d�ng�de bir sonraki/�nceki harfe ge�ebilmek i�indir*/
		
		dizi[uzunluk-1-i] = gecici; //gecici'yi, dizi[uzunluk-1-i]'ye e�itleyip bir sonraki d�ng�de bir sonraki harfe ge�ebilmek i�in bunu yapt�k.
		
		//bu d�ng� algoritmaya dayal� bir durumdur. �al���lmas� gerekiliyor.
	}
	
	
}

int main() {
	
	
	char kelime[200]; //uzunlu�u max. 200 olabilecek olan dizi olu�turdum.
		
	printf("kelime giriniz: ");
	scanf("%s",&kelime); //diziyi doldurmas�n� istedim.
	tersCevir(kelime); //girilen diziyi yazd���m fonksiyona g�nderdim ve fonksiyon, yaz�lan kelimeyi tersine �evirdi.
	printf("%s",kelime); //fonksiyondan gidip gelen dizi terse d�nm��t�r ve art�k ters olarak ekrana yaz�l�r.
	
	
	return 0;
}
