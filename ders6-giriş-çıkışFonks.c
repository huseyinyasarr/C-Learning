 #include<stdio.h> //standart input-output k�t�phanesidir.
 #include <locale.h>
 #define PI 3.14 //define tan�mlamak anlam�na gelir. Burada PI say�s�n� 3.14 olarak tan�mlam�� olduk.
 
 
 /*
 scanf = giri� fonksiyonu kullan�c�dan veri almam�z� sa�lar.
 printf = ��k�� fonksiyonu kullan�c�ya ��kt� verir.
 
 scanf ile kullan�c�dan ald���m�z veriyi ekrana yazd�rmak i�in & kullan�l�r. �R yazd�rma: printf("%d",&x)
 
 
 
 */
 
 int main() {
 	
	
	
	
 		float yaricap; //tan�mlamalar main k�sm�n�n en �st�nde olmak zorundad�r.
 		float hacim;
 		
 		
 		
 		setlocale(LC_ALL, "Turkish");
 	
 		printf("K�re Hacmi Hesaplama");
 		printf("\nYar��ap� giriniz:");
 		scanf("%f",&yaricap);
 	
 		
 		hacim = 4/3.0*PI*yaricap*yaricap*yaricap; //3.0 yazmam�zdaki sebep float de�ere �evirsin.
 		printf("K�renin hacmi %f'dir",hacim);
 	
 	
 	
 	
 	return 0;
 }
