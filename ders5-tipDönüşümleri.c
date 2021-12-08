#include<stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	
	int a = 5;
	float b = 3.1;

	int c;
	c=a*b;
	
	printf("%.1f",a*b);
	printf("\n%d",(int)3.2);
	printf("\n%d",c);
	
	
	
	
	
	return 0;
}
