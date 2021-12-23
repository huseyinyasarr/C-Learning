#include<stdio.h>
#include<locale.h>



int main() {
	
	
	
	setlocale(LC_ALL, "Turkish");
	int i;
	int kume[] = {6,9,12,13,13,17}; /*aslýnda burada bildiðimiz küme tanýmlamýþ olduk ve kümeye "kume" adý verdik.
	ilk terimine 1.terim deðil 0 diyoruz. ilk terimini yazdýrmak istersek printf("%d",kume[0]); kodunu yazarýz */

	
	for(i=0;i<=5;++i) {
		
		printf("%d\n",kume[i]);
	}
	

	return 0;
}
