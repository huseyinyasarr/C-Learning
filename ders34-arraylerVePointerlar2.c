#include<locale.h>
#include<stdio.h>

int enBuyukSayi(int *a, int uzunluk) { // " * " yaparak gelen array adrese dönüþebilir. a[] þeklinde yazarsakta ayný anlama gelir.
	
	int enBuyuk = *a; // *a = enBuyuk'e a'nýn sýfýrýncý elemanýna eþitleriz. Artýk enBuyuk = 2'dir.
	int i;
	
	for(i=1; i < uzunluk; ++i) { //1 den baþlatmamýzýn nedeni aþaðýda daha iyi anlaþýlacaktýr.
		
		if (*(a+i) > enBuyuk) { //eðer a[1] > a[0] ise döngüye girer. Deðilse for sayesinde a[2], a[3] þeklinde deneyerek ilerler. a[0] dan nüyük eleman varsa if'e girilir.
		
		enBuyuk = *(a+i); /* a[0] dan büyük olan eleman artýk enBuyuk sayýdýr. a[3] > a[0] dan büyük olduðu için if bloðuna girer ve enBuyuk sayýya eþitlenir. 
		Artýk enBuyuk=a[3]'dür. artýk for döngüsü a[3] için ayný þekilde devam eder. */
		}
	}
	
	return enBuyuk;
}




int main() {
	setlocale(LC_ALL,"Turkish");
	
	int sayilar[5] = {5,1,4,7,2};
	//int *a = &sayilar; //artýk bu þekilde yapmaya gerek yok çünkü fonksiyonda int *a þeklinde gelen veriyi pointera çevirmiþ oluyoruz.

	int buyuk;
	
	buyuk = enBuyukSayi(sayilar,5); //C de arraylerin uzunluðunu fonksiyona göndermemiz gerekiyor. 5, arrayin uzunluðu oluyor.
	
	printf("en büyük sayý: %d",buyuk);
	
	
	
	
	
	
	
	
	return 0;
}
