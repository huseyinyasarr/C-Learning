#include<stdio.h>
#include<locale.h>

/*
1 2 3 4
5 6 7 8
9 10 11 12

*/

int main() {
	

	int sayilar[3][4];
	int i, k, j;
	k = 0;

	setlocale(LC_ALL, "Turkish");
	
	for(i=0; i<=2; ++i) {
		
		for(j=0; j<=3; ++j){
			
			scanf("%d",&sayilar[i][j]);
		}
		
	}
	
	for(i=0; i<=2; ++i) {
		
		for(j=0; j<=3; ++j) {
		
		k = k + sayilar[i][j];
			
		}
		printf("%d ",k);
		k = 0;
	}
	
		
	
	//sayilar[3][4] matrisindeki satýrlarýn toplamý
	
	
	return 0;
}
