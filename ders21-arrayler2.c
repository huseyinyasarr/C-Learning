#include<stdio.h>
#include<locale.h>



int main() {
	setlocale(LC_ALL,"Turkish");
	
	float girdiler[6]; // bu þekilde yaptýðýmýzda 6 elemanlý küme tanýmlamýþ oluruz.
	float toplam;
	toplam = 0,0;
	int i; //döngü deðiþkeni
	
	
	for (i=0; i<=5; ++i) {
		
		printf("sayý giriniz: ");
		scanf("%f",&girdiler[i]);
		
		toplam = toplam + girdiler[i];		
	}
	
	printf("Girdiðiniz sayýlarýn aritmetik ortalamasý: %.2f",toplam/6);
	
	
	
	
	
	
	return 0;
}
