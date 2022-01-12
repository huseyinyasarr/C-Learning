#include<locale.h>
#include<stdio.h>

int enBuyuk(int c,int a,int b) {
	if(c>a && c>b) {
		printf("En büyük %d 'dir",c);
	}
	
	if(a>c && a>b) {
		printf("En büyük %d 'dir",a);
	}
	
	if(b>a && b>c) {
		printf("En büyük %d 'dir",b);
	}
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	int a,b,c;
	printf("3 tane tam sayý giriniz: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("%s",enBuyuk(c,a,b));
	
	
	
	
	
	
	return 0;
}
