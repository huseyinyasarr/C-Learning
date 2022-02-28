#include<locale.h>
#include<stdio.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = &sayilar; //sayilar yazmakla sayilar[0] yazma arasýnda bir fark yoktur. sayilar sýfýrýncý elemaný gösterir.
	
	printf("%u\n",p); //üstte p'yi sayilar arrayinin sýfýrýncý elemanýna eþitlediðimiz için bunun çýktýsý ilk elemanýn yani 1'in adresi olur.
	printf("%u\n",p+1); //anlaþýlýðý üzere bir sonraki elemanýn adresini verir. int 4 byte'lýk yer kapladýðý için 1'in adresinden 4 fazla olur. +4, +4 þeklinde ilerlediði için pointer aritmetiði denmektedir.
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4);
	
	printf("%d\n",*p); //buradaki yýldýzdan p'deki adresin deðeri olduðunu anlarýz. Bu durumda bunun çýktýsý ilk eleman yani 1 olur. 
	printf("%d\n",*(p+1)); //1. eleman olduðu için çýktýsý 2 olur.
	printf("%d\n",*(p+2)); // *(p+2) ===> p[2] ayný anlama gelmektedir.
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+4));
	
	
	
	
	
	
	
	
	return 0;
}
