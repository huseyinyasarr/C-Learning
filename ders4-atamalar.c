#include<stdio.h>
#include <locale.h> //clocale kütüphanesi. Bu kütüphaneyi Türkçe karakter desteði için kullanýrýz.



int main() {
	
	setlocale(LC_ALL, "Turkish"); //Kütüphaneden Türkçe dilini seçmiþ oluruz.
	
	int x = 6;
	int y = 7;
	
	x = y+1; // soldaki x bilinmeyen bir deðer olur. y'nin deðerine (7) +1 eklenir ve x'in deðeri artýk y(7)+1 olur (8).	
	//printf("%d",x);
	
	int a = 4;
	
	a = a+1; // sol taraftaki a bilinmeyendir. Öncelikle sað taraf hesaplanýr ve sonuç a'nýn deðeri olur.
	
	
	//printf("\n%d",a);
	
	x = y = a = 2;  //bu satýrdan sonra x,y ve a'nýn deðerleri 2'dir.
	
	
	printf("\n%d",y++); // y bu satýrda 2'dir. y sayýsýný bu satýrdan sonraki satýrlarda deðerini y=y+1 yapar.
	printf("\n%d",y);  // y'nin deðeri bu satýrda 3'tür.
	printf("\n%s %d","28. satýrdaki kod:",++a); //23.satýrda a'nýn deðeri 2'idi. ++a þeklinde yazdýðým için sonuç 3 oldu ve deðiþiklik yapmadýðým müddetçe a=3 olacaktýr.
	
	// ++i þeklinde yazýldýðýnda o satýr ve devamýnda i'nin deðeri 1 artmýþ olur.
	// i++ þeklinde yazýldýðýnda o satýrdan sonraki satýrlarda i'nin deðeri artmýþ olur.
	
	printf("\n%s %d","33.satýrdaki kod:",++y);
	printf("\n%s %d","34.satýrdaki kod:",++y);
	
	printf("\n%s %d","36.satýr:",a+1);
	
	
	x = 2;
	y = 3;
	a = 5;
	
	//bu satýrlar sayesinde yeni deðerler vermiþ olduk
	
	x += y + 3; //!eþittir ile + arasýnda boþluk olmamalý!!! saðdan sola gidilir. 3'e y deðerini ekle sonuca +x deðeri ekle ve x'e deðer olarak ver.
	printf("\n%s %d","46.satýr:",x); // sonuç 8
	
	printf("\nx:%d y:%d a:%d",x,y,a); //tanýmýn yanýna tek kelimelik bir þey yazýp yanýna iki nokta üst üste yazarsan yazdýðýn kelime olduðu gibi çýkar. "x: çýktý y: çýktý a:çýktý vs"
	
	
	
	return 0;
}
