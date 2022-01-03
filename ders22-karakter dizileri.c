#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	/*char isim[] = "Hüseyin";
	printf("%c",isim[1]); */
	
	char isim[20]; //C dilinde girilecek harf/sayýlar için miktar belirtmek gerekiyor.
				   //burada hafýza 20 karakterlik yer açar. Ancak PC de bir sonraki hafýza boþsa fazladan karakter alabilir.
				   //ancak sistemin düzgün çalýþabilmesi için hafýzada yeterli yer açmak gerekir.
				   				   
	printf("Ýsminizi giriniz: ");
	scanf("%s",&isim); //karakter dizilerinde kullanýcýdan veri alýrken "&" kullanmaya gerek yoktur
	//scanf sadece ilk kelimeyi alýr.
	printf("%s",isim);
	
	
	
	
	
	
	return 0;
}
