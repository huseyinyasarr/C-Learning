#include<stdio.h>
#include<locale.h>

//fibonacci

int main() {
	
	int i,ilksayi,ikincisayi,temp,a;
	i = 0;
	
	
	setlocale(LC_ALL, "Turkish");
	ilksayi = 1;
	ikincisayi = 1;
	printf("Terim giriniz: ");
	scanf("%d",&a);
	
	
	while(i < a) {
		
		temp =ikincisayi;
		ikincisayi = ikincisayi + ilksayi;
		ilksayi = temp;
		++i;
		printf("%d\n",ikincisayi);	
		
		
	}
	
	
	
	
	
	return 0;
}
