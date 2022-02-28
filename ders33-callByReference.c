#include<stdio.h>
#include<locale.h>

void degistir(int *a,int *b) {
	
	int gecici;
	gecici = *a;
	*a = *b;
	*b = gecici;
	
}


int main() {
	setlocale(LC_ALL,"Turkish");
	int x=5,y=10;
	
	degistir(&x,&y);
	
	printf("x=%d\ny=%d",x,y);
	
	
	
	
	
	
	return 0;
}
