#include<stdio.h>
#include<locale.h>


int main() {
	
	int i = 1; //d�ng�n�n saymay ba�lamas�n� istedi�in say�y� gireriz.
	
	
	setlocale(LC_ALL, "Turkish");


	while(i <= 10) {
		
		
		printf("%d.Merhaba D�nya\n",i);
		
		++i;
		
		
		
	}	
	
	
	
	
	
	return 0;
}

