#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	/*char isim[] = "H�seyin";
	printf("%c",isim[1]); */
	
	char isim[20]; //C dilinde girilecek harf/say�lar i�in miktar belirtmek gerekiyor.
				   //burada haf�za 20 karakterlik yer a�ar. Ancak PC de bir sonraki haf�za bo�sa fazladan karakter alabilir.
				   //ancak sistemin d�zg�n �al��abilmesi i�in haf�zada yeterli yer a�mak gerekir.
				   				   
	printf("�sminizi giriniz: ");
	scanf("%s",&isim); //karakter dizilerinde kullan�c�dan veri al�rken "&" kullanmaya gerek yoktur
	//scanf sadece ilk kelimeyi al�r.
	printf("%s",isim);
	
	
	
	
	
	
	return 0;
}
