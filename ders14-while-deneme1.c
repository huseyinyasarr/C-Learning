#include<stdio.h>
#include<locale.h>


int main() {
	
	int n;
	int fact = 1;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Faktöriyelini hesaplamak istediðiniz sayýyý giriniz: ");
	scanf("%d",&n);
	
	while(0<n) {
	
	fact= fact*n;	
		--n;
			
		
	}
 	
 	printf("%d",fact);
	
	
	
	
	
	return 0;
}
