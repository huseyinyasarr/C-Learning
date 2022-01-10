#include<stdio.h>
#include<locale.h>

int asalSayiMi(int sonuc) { //buradaki sonuc aslýnda main den gelen sayý gibi düþünebiliriz.

	int i;
	
	for(i=2; i<sonuc; ++i)
		if(sonuc % i == 0) { //girilen sayý tam bölündüðünde bu bloða girer.
			return 0; // fonksiyon aþaðýdaki kodlara uðramaksýzýn fonksiyon tamamlanýr. Bildiðin break gibi çalýþýr.
		
		}	
	
	
	return 1; //buradaki 1 olumlu olduðu anlamýna gelir.
}







int main() {
	setlocale(LC_ALL, "Turkish");
	
	int a;
	printf("Bir sayý giriniz: ");
	scanf("%d",&a);
	
	
	if (asalSayiMi(a) == 0 || a <2) {
		printf("Girilen Sayý Asal Deðildir.");
	}
	
	
	else {
		printf("Girilen sayý asaldýr.");
	}

	
	return 0;
}
