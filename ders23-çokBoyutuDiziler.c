#include <stdio.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL,"Turkish");
	
	/*
	
	1 2 3  ilk satýr 0'a eþittir. 0 a 0 = 1   0 a 1= 2  2 ye 1 = 8
	4 5 6
	7 8 9
	
	*/
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	
	for (i=0; i<=2; ++i) {
		
		for (j=0; j<=2; ++j) {
			
			printf("%d ",matris[i][j]);
			
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
