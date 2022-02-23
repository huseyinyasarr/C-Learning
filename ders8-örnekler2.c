#include<stdio.h>
#include <locale.h>
#include<math.h>


/*
(sqrt(kökünü almak istediðin))

a*a +2*a*b +b*b

*/

int main() {
	
	int a,b;
	int karesi;
	int w;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("(a+b)^2 þeklinde iki sayýnýn hesaplanmasý");
	printf("\na'yý giriniz:");
	scanf("%d",&a);
	printf("b'yi giriniz:");
	scanf("%d",&b);
	
	w = a+b;
	karesi = w*w;
	printf("karesi: %d",karesi);
	
	
	return 0;
}
