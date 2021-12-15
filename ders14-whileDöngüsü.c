#include<stdio.h>
#include<locale.h>


int main() {
	
	int i = 1; //döngünün saymay baþlamasýný istediðin sayýyý gireriz.
	
	
	setlocale(LC_ALL, "Turkish");


	while(i <= 10) {
		
		
		printf("%d.Merhaba Dünya\n",i);
		
		++i;
		
		
		
	}	
	
	
	
	
	
	return 0;
}

