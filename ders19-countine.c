#include<stdio.h>
#include<locale.h>



int main() {
	
	int toplam = 0;
	int i, girdi1, girdi2;
	
	setlocale(LC_ALL, "Turkish");
		
	printf("girdi�iniz say�lar aras�ndaki �ift say�lar� toplar.\nB�y�k say�: ");
	scanf("%d",&girdi1);
	printf("K���k say�: ");
	scanf("%d",&girdi2);
	

	
	for(i=girdi2; i<=girdi1; ++i) {
		
		
		if( i%2==1){
			continue;  // bu kodu g�rd���nde daha devam etmeyip d�ng�n�n ba��na d�ner.
		}
		
		toplam = toplam + i;
	}
	
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}
