#include<stdio.h>
#include<locale.h>


int main() {
	
	int a,b;
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Girdiðiniz sayý tek mi çift mi?");
	printf("\nSayý giriniz: ");
	scanf("%d",&a);
	
	b = a%2;
	
	
	if(b==0) {
		
		printf("Girdiðiniz sayý çifttir.");
	}
	

	else{
		printf("Girdiðiniz sayý tektir.");
	}
	
	
	
	
	return 0;
}
