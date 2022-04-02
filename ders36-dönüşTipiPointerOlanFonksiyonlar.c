#include<locale.h>
#include<stdio.h>
#include<string.h>

char *dondur(char *p, int index){ //burada dönecek olan pointer olduðu için en baþýnda " * " var. Burada gönderilen dizinin adresi bulunmuþ olacak.
	
	int uzunluk = strlen(p);
	
	
	if (index>uzunluk-1) { //gelen index deðeri eðer kelimeden uzunsa (-1 koyarak dizinin son karakteri olan NULL'u sildik) dýþarýya NULL döndürecek.
		return NULL;
	}	
	
	else { //deðilse index deðer +2 ise dizinin 3. harfin ve sonrasýnýn adresini yollamýþ olacak.
		return p+index;
	}
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	char dizi[] = "yazilim";
	char *p = dondur(dizi,6); //bir pointer oluþturduk ve fonksiyondan gelen deðeri p pointerýna atadýk.
	
	if (p == NULL) { //gelen NULL ise buraday girecek deðilse else sayesinde yazýlacak.
		printf("pointer NULL");
	}
	
	else {
		printf("%s",p);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
