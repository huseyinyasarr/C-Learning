#include<stdio.h>
#include<locale.h>

/*

for (ilk ara; ikinci ara; ���nc� ara;)
ilk araya ba�lang�� de�erlerini at�yoruz. e�er birden fazla ba�lang�� de�eri atayacaksak bu de�erleri virg�lle ay�r�r�z,
ikinci araya �artlar� (<,>,&&,|| vb) yazar�z. �r: ilk ara; i<10 && j>12; ���nc� ara gibi.
���nc� ara yapmak istedi�imizi yazar�z �r: i++, j++ gibi gibi

for (i=1; i<10; ++i)
ilk seferde i, 1'e e�itlenir ve for'a girer. for'un en sonuna geldi�inde ++i emrini ger�ekle�tirir. ba�a d�ner ve
i<10 �art�n�n sa�lan�p sa�lanmad���n� kontrol eder ve bu �art bozulana kadar bu �ekilde devam eder.
*/


int main() {
	
	int i,n,a;	

	while (a<2) {		
	setlocale(LC_ALL, "Turkish");
	printf("saymas�n� istedi�in say�y� yaz: ");
	scanf("%d",&n);
		
		
		for (i=1; i<=n; ++i) {
		
			printf("%d\n",i);
		
		
		}
	
	printf("\ndevam 1, iptal 2: ");
	scanf("%d",&a);
}
	
	
	
	return 0;
}
