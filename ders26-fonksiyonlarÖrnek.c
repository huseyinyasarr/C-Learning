#include<stdio.h>
#include<locale.h>

int asalSayiMi(int sonuc) { //buradaki sonuc asl�nda main den gelen say� gibi d���nebiliriz.

	int i;
	
	for(i=2; i<sonuc; ++i)
		if(sonuc % i == 0) { //girilen say� tam b�l�nd���nde bu blo�a girer.
			return 0; // fonksiyon a�a��daki kodlara u�ramaks�z�n fonksiyon tamamlan�r. Bildi�in break gibi �al���r.
		
		}	
	
	
	return 1; //buradaki 1 olumlu oldu�u anlam�na gelir.
}







int main() {
	setlocale(LC_ALL, "Turkish");
	
	int a;
	printf("Bir say� giriniz: ");
	scanf("%d",&a);
	
	
	if (asalSayiMi(a) == 0 || a <2) {
		printf("Girilen Say� Asal De�ildir.");
	}
	
	
	else {
		printf("Girilen say� asald�r.");
	}

	
	return 0;
}
