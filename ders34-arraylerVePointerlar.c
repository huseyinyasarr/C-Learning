#include<locale.h>
#include<stdio.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = &sayilar; //sayilar yazmakla sayilar[0] yazma aras�nda bir fark yoktur. sayilar s�f�r�nc� eleman� g�sterir.
	
	printf("%u\n",p); //�stte p'yi sayilar arrayinin s�f�r�nc� eleman�na e�itledi�imiz i�in bunun ��kt�s� ilk eleman�n yani 1'in adresi olur.
	printf("%u\n",p+1); //anla��l��� �zere bir sonraki eleman�n adresini verir. int 4 byte'l�k yer kaplad��� i�in 1'in adresinden 4 fazla olur. +4, +4 �eklinde ilerledi�i i�in pointer aritmeti�i denmektedir.
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4);
	
	printf("%d\n",*p); //buradaki y�ld�zdan p'deki adresin de�eri oldu�unu anlar�z. Bu durumda bunun ��kt�s� ilk eleman yani 1 olur. 
	printf("%d\n",*(p+1)); //1. eleman oldu�u i�in ��kt�s� 2 olur.
	printf("%d\n",*(p+2)); // *(p+2) ===> p[2] ayn� anlama gelmektedir.
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+4));
	
	
	
	
	
	
	
	
	return 0;
}
