#include<stdio.h>
#include<locale.h>



int main() {
	
	int toplam = 0;
	int i, girdi1, girdi2;
	
	setlocale(LC_ALL, "Turkish");
		
	printf("girdiðiniz sayýlar arasýndaki çift sayýlarý toplar.\nBüyük sayý: ");
	scanf("%d",&girdi1);
	printf("Küçük sayý: ");
	scanf("%d",&girdi2);
	

	
	for(i=girdi2; i<=girdi1; ++i) {
		
		
		if( i%2==1){
			continue;  // bu kodu gördüðünde daha devam etmeyip döngünün baþýna döner.
		}
		
		toplam = toplam + i;
	}
	
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}
