#include<stdio.h>
#include<locale.h>



int main() {
	setlocale(LC_ALL,"Turkish");
	
	float girdiler[6]; // bu �ekilde yapt���m�zda 6 elemanl� k�me tan�mlam�� oluruz.
	float toplam;
	toplam = 0,0;
	int i; //d�ng� de�i�keni
	
	
	for (i=0; i<=5; ++i) {
		
		printf("say� giriniz: ");
		scanf("%f",&girdiler[i]);
		
		toplam = toplam + girdiler[i];		
	}
	
	printf("Girdi�iniz say�lar�n aritmetik ortalamas�: %.2f",toplam/6);
	
	
	
	
	
	
	return 0;
}
