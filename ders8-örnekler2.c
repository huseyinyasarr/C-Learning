#include<stdio.h>
#include <locale.h>
#include<math.h>


/*
(sqrt(k�k�n� almak istedi�in))

a*a +2*a*b +b*b

*/

int main() {
	
	int a,b;
	int karesi;
	int w;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("(a+b)^2 �eklinde iki say�n�n hesaplanmas�");
	printf("\na'y� giriniz:");
	scanf("%d",&a);
	printf("b'yi giriniz:");
	scanf("%d",&b);
	
	w = a+b;
	karesi = w*w;
	printf("karesi: %d",karesi);
	
	
	return 0;
}
