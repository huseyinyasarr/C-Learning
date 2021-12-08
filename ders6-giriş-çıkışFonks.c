 #include<stdio.h> //standart input-output kütüphanesidir.
 #include <locale.h>
 #define PI 3.14 //define tanýmlamak anlamýna gelir. Burada PI sayýsýný 3.14 olarak tanýmlamýþ olduk.
 
 
 /*
 scanf = giriþ fonksiyonu kullanýcýdan veri almamýzý saðlar.
 printf = çýkýþ fonksiyonu kullanýcýya çýktý verir.
 
 scanf ile kullanýcýdan aldýðýmýz veriyi ekrana yazdýrmak için & kullanýlýr. ÖR yazdýrma: printf("%d",&x)
 
 
 
 */
 
 int main() {
 	
	
	
	
 		float yaricap; //tanýmlamalar main kýsmýnýn en üstünde olmak zorundadýr.
 		float hacim;
 		
 		
 		
 		setlocale(LC_ALL, "Turkish");
 	
 		printf("Küre Hacmi Hesaplama");
 		printf("\nYarýçapý giriniz:");
 		scanf("%f",&yaricap);
 	
 		
 		hacim = 4/3.0*PI*yaricap*yaricap*yaricap; //3.0 yazmamýzdaki sebep float deðere çevirsin.
 		printf("Kürenin hacmi %f'dir",hacim);
 	
 	
 	
 	
 	return 0;
 }
