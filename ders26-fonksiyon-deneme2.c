#include<locale.h>
#include<stdio.h>

int enBuyuk(int c,int a,int b) {
	if(c>a && c>b) {
		printf("En b�y�k %d 'dir",c);
	}
	
	if(a>c && a>b) {
		printf("En b�y�k %d 'dir",a);
	}
	
	if(b>a && b>c) {
		printf("En b�y�k %d 'dir",b);
	}
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	int a,b,c;
	printf("3 tane tam say� giriniz: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("%s",enBuyuk(c,a,b));
	
	
	
	
	
	
	return 0;
}
