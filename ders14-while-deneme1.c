#include<stdio.h>
#include<locale.h>


int main() {
	
	int n;
	int fact = 1;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Fakt�riyelini hesaplamak istedi�iniz say�y� giriniz: ");
	scanf("%d",&n);
	
	while(0<n) {
	
	fact= fact*n;	
		--n;
			
		
	}
 	
 	printf("%d",fact);
	
	
	
	
	
	return 0;
}
