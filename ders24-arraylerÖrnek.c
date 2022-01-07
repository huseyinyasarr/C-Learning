#include<stdio.h>
#include<locale.h>

/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15



*/

int main() {
	

	int sayilar[3][5];
	int i, k, j;
	k = 0;

	setlocale(LC_ALL, "Turkish");
	
	for(i=0; i<=2; ++i) {
		
		for(j=0; j<=4; ++j){
			
			scanf("%d",&sayilar[i][j]);
		}
		
	}
	
	for(j=0; j<=4; ++j) {
		
		for(i=0; i<=2; ++i) {
		
		k = k + sayilar[i][j];
			
		}
		printf("%d ",k);
		k = 0;
	}
	
	//sütunolarýnýn toplamýný yazdýracaðýmýz için for döngüsünü ilkte j'ye göre yazdým.
	
	
	
	
	
	return 0;
}
