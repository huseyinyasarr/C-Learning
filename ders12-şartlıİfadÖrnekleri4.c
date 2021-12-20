#include<stdio.h>
#include<locale.h>



int main() {
	

	int a,d,e,f;
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("sayý giriniz: ");
	scanf("%d",&a);
	
	d = a%2;
	e = a%3;
	f = a%6;
	

	if(d==0 && f>0) {
		printf("2'nin katýdýr.");
	}
	
	if(e==0 && f>0) {
		printf("3'ün katýdýr.");
	}
	
	if(f==0) {
		printf("2 ve 3'ümn katýdýr.");
	}
	

	
	
	
	return 0;
}
