#include <stdio.h>
#include <locale.h>

int faktoriyel(int sayi) {
	
	int fakt;
	fakt=1;
	
	for(/*buray� bo� b�rak�yoruz ��nk� sayi sonradan girilen herhangi bir say�d�r*/; sayi>0;--sayi) {
		
		fakt = fakt*sayi;		
	
		
	}
	
//	printf("%d",fakt);	
	return fakt; //main'in i�inde �al��abilmesi i�in bunu yazmak gerekiyor.
	
}


int main() {
	setlocale(LC_ALL, "Turkish");
	
	int n;
	
	printf("Fakt�riyelini hesaplamak istedi�iniz say�y� giriniz: ");
	scanf("%d",&n);
	
//	faktoriyel(n);	
	
	printf("%d",faktoriyel(n));
	
	
	
	return 0;
}
