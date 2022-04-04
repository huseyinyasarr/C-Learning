#include<stdio.h>
#include<locale.h>

char *gunismi(char *gundizisi[], int uzunluk, int hangigun) { //pointer olduklar� i�in " * " koyduk. 
	
	if (hangigun >=1 && hangigun <=7) {
		
		return gundizisi[hangigun-1]; // gunler[0] = pazartesi oldu�u i�in 1 dendi�inde pazartesi gelebilmesi i�in. NULL'dan �t�r�.
	}
	else {
		return NULL;
	}
	
	
}



int main () {
	setlocale(LC_ALL,"Tukish");
	
	char *gunler[7] = {"pazartesi","sal�","carsamba","persembe","cuma","cumartesi","pazar"}; //bu �ekilde harf harf de�il kelime olarak tutabildik (?)
	
	char *p = gunismi(gunler,7,3); //gunler arrayini, arrayin uzunluk bilgisini ve hangi g�n� istedi�imizi yollad�k.
	
	//gelen sonu�lara g�re if veya else blo�u �al���r.
	
	if (p==NULL) {
		printf("Naab�yon?");
	}
	else {
		printf("%s",p);
	}
	
	
	
	
	
	
	
	return 0;
}
