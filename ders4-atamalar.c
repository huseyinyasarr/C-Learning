#include<stdio.h>
#include <locale.h> //clocale k�t�phanesi. Bu k�t�phaneyi T�rk�e karakter deste�i i�in kullan�r�z.



int main() {
	
	setlocale(LC_ALL, "Turkish"); //K�t�phaneden T�rk�e dilini se�mi� oluruz.
	
	int x = 6;
	int y = 7;
	
	x = y+1; // soldaki x bilinmeyen bir de�er olur. y'nin de�erine (7) +1 eklenir ve x'in de�eri art�k y(7)+1 olur (8).	
	//printf("%d",x);
	
	int a = 4;
	
	a = a+1; // sol taraftaki a bilinmeyendir. �ncelikle sa� taraf hesaplan�r ve sonu� a'n�n de�eri olur.
	
	
	//printf("\n%d",a);
	
	x = y = a = 2;  //bu sat�rdan sonra x,y ve a'n�n de�erleri 2'dir.
	
	
	printf("\n%d",y++); // y bu sat�rda 2'dir. y say�s�n� bu sat�rdan sonraki sat�rlarda de�erini y=y+1 yapar.
	printf("\n%d",y);  // y'nin de�eri bu sat�rda 3't�r.
	printf("\n%s %d","28. sat�rdaki kod:",++a); //23.sat�rda a'n�n de�eri 2'idi. ++a �eklinde yazd���m i�in sonu� 3 oldu ve de�i�iklik yapmad���m m�ddet�e a=3 olacakt�r.
	
	// ++i �eklinde yaz�ld���nda o sat�r ve devam�nda i'nin de�eri 1 artm�� olur.
	// i++ �eklinde yaz�ld���nda o sat�rdan sonraki sat�rlarda i'nin de�eri artm�� olur.
	
	printf("\n%s %d","33.sat�rdaki kod:",++y);
	printf("\n%s %d","34.sat�rdaki kod:",++y);
	
	printf("\n%s %d","36.sat�r:",a+1);
	
	
	x = 2;
	y = 3;
	a = 5;
	
	//bu sat�rlar sayesinde yeni de�erler vermi� olduk
	
	x += y + 3; //!e�ittir ile + aras�nda bo�luk olmamal�!!! sa�dan sola gidilir. 3'e y de�erini ekle sonuca +x de�eri ekle ve x'e de�er olarak ver.
	printf("\n%s %d","46.sat�r:",x); // sonu� 8
	
	printf("\nx:%d y:%d a:%d",x,y,a); //tan�m�n yan�na tek kelimelik bir �ey yaz�p yan�na iki nokta �st �ste yazarsan yazd���n kelime oldu�u gibi ��kar. "x: ��kt� y: ��kt� a:��kt� vs"
	
	
	
	return 0;
}
