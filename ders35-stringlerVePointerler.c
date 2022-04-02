#include<locale.h>
#include<stdio.h>

int benimstrlen(char *p) {
	int uzunluk;
	uzunluk = 0;
	int i;
	for(i=0; p[i]!='\0'; ++i) {
		++uzunluk;
	}
	
	return uzunluk;
	
}


int main() {
	char yazi[] = "Hüseyin";
	int kelime;
	kelime = benimstrlen(yazi);
	
	printf("%d",kelime);
	
	
	
	
	
	return 0;
}
