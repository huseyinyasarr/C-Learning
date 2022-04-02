#include<locale.h>
#include<stdio.h>
#include<string.h>

char *dondur(char *p, int index){ //burada d�necek olan pointer oldu�u i�in en ba��nda " * " var. Burada g�nderilen dizinin adresi bulunmu� olacak.
	
	int uzunluk = strlen(p);
	
	
	if (index>uzunluk-1) { //gelen index de�eri e�er kelimeden uzunsa (-1 koyarak dizinin son karakteri olan NULL'u sildik) d��ar�ya NULL d�nd�recek.
		return NULL;
	}	
	
	else { //de�ilse index de�er +2 ise dizinin 3. harfin ve sonras�n�n adresini yollam�� olacak.
		return p+index;
	}
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	char dizi[] = "yazilim";
	char *p = dondur(dizi,6); //bir pointer olu�turduk ve fonksiyondan gelen de�eri p pointer�na atad�k.
	
	if (p == NULL) { //gelen NULL ise buraday girecek de�ilse else sayesinde yaz�lacak.
		printf("pointer NULL");
	}
	
	else {
		printf("%s",p);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
