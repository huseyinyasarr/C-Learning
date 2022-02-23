#include<locale.h>
#include<stdio.h>


int main() {
	setlocale(LC_ALL,"Turkish");
	
/*	bun�ar giri� ve tekrar ama�l�


	int a = 1, *ap; //buradaki ap tamamen uydurmad�r. a, pointer anlam�na gelir. Kafa kar���kl���na yol a�mas�n diyerekten bu �ekilde yap�l�r.j
	float b = 3.12, *bp;
	double c = 4.144, *cp;
	char d = 'h', *dp;
		
	int sayilar[5] = {1,2,3,4,5}, *arrayp;
	
	// bundan sonra burdaki pointerlerin nereye ait oldu�unu g�stermemiz gerekiyor.,
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	arrayp = &sayilar[4]; // sayilar arrayinin 4. eleman�n�n adresi 
	
	printf("%u adresindeki de�er %d'dir.\n",ap,*ap);
	printf("%u adresindeki de�er %f'dir.\n",bp,*bp);
	printf("%u adresindeki de�er %f'dir.\n",cp,*cp);
	printf("%u adresindeki de�er %c'dir.\n",dp,*dp);
	printf("%u adresindeki de�er %d'dir.\n",arrayp,*arrayp);	
*/	
	
	int i,j; //i ile j'yi tan�mlad�k.
	j = 1; // j ye 1 de�erini verdik.
	
	int *jp1,*jp2; //jp1 ve jp2 pointerlerini tan�mlad�k. Pointer oldu�unu anlatabilmek i�in * kulland�k.
		
	jp2 = &j; //*jp2 pointeri, j'nin adresini almas�n� istedik. (j nin adresini tutma�sn� istedi�imiz i�in & kulland�k)
	
	jp1 = jp2; //jp2 yi jp1 e e�itledi. art�k jp2 deki adresle jp1 deki adres ayn� oldu. yukar�da *jp2 j'nin adresini tuttu�u i�in (bu adres 1000 olsun) art�k jp1'de de 1000. adres var.
	i = ++(*jp2); //jp2 pointer�na gitti. Sonras�nda oradaki adrese gitti ve * sayesinde de�erini getirdi. *jp2 = 1 oldu�u i�in ve ++ ile 1 artt�rd��� i�in i = 2'dir.
	//++ sayesinde *jp2 deki de�er 1 artm�� oldu. jp2 deki adresle jp1 deki adrees yukar�da e�it oldu�u i�in art�k *jp1' de 2'dir.
	
	*jp2 = *jp1 +i; //*jp1 deki de�er 2, i'nin de�eri (2) bu durumda *jp2 deki de�er 2+2 den 4 olur. *jp2 = 4 oldu�undan j de art�k 4',t�r.
	
	printf("i = %d, j = %d, *jp1 = %d, *jp2 = %d",i,j,*jp1,*jp2); //i = 2, j = 4, *jp1 = 4, *jp2 = 4

	
	
	
	
	return 0;
}
