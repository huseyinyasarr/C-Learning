#include<stdio.h>
#include<locale.h>



int main() {
	
	
	
	setlocale(LC_ALL, "Turkish");
	int i;
	int kume[] = {6,9,12,13,13,17}; /*asl�nda burada bildi�imiz k�me tan�mlam�� olduk ve k�meye "kume" ad� verdik.
	ilk terimine 1.terim de�il 0 diyoruz. ilk terimini yazd�rmak istersek printf("%d",kume[0]); kodunu yazar�z */

	
	for(i=0;i<=5;++i) {
		
		printf("%d\n",kume[i]);
	}
	

	return 0;
}
