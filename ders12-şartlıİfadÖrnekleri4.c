#include<stdio.h>
#include<locale.h>



int main() {
	

	int a,d,e,f;
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("say� giriniz: ");
	scanf("%d",&a);
	
	d = a%2;
	e = a%3;
	f = a%6;
	

	if(d==0 && f>0) {
		printf("2'nin kat�d�r.");
	}
	
	if(e==0 && f>0) {
		printf("3'�n kat�d�r.");
	}
	
	if(f==0) {
		printf("2 ve 3'�mn kat�d�r.");
	}
	

	
	
	
	return 0;
}
