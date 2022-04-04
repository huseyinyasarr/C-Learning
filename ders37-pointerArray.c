#include<stdio.h>
#include<locale.h>

char *gunismi(char *gundizisi[], int uzunluk, int hangigun) { //pointer olduklarý için " * " koyduk. 
	
	if (hangigun >=1 && hangigun <=7) {
		
		return gundizisi[hangigun-1]; // gunler[0] = pazartesi olduðu için 1 dendiðinde pazartesi gelebilmesi için. NULL'dan ötürü.
	}
	else {
		return NULL;
	}
	
	
}



int main () {
	setlocale(LC_ALL,"Tukish");
	
	char *gunler[7] = {"pazartesi","salý","carsamba","persembe","cuma","cumartesi","pazar"}; //bu þekilde harf harf deðil kelime olarak tutabildik (?)
	
	char *p = gunismi(gunler,7,3); //gunler arrayini, arrayin uzunluk bilgisini ve hangi günü istediðimizi yolladýk.
	
	//gelen sonuçlara göre if veya else bloðu çalýþýr.
	
	if (p==NULL) {
		printf("Naabýyon?");
	}
	else {
		printf("%s",p);
	}
	
	
	
	
	
	
	
	return 0;
}
