#include<stdio.h>
#include<locale.h>


int main() {
	
	int i,ilksayi,ikincisayi,temp;
	i = 0;
	
	
	setlocale(LC_ALL, "Turkish");
	ilksayi = 1;
	ikincisayi = 1;
	
	while(i < 12) {
		
		temp =ikincisayi;
		ikincisayi = ikincisayi + ilksayi;
		ilksayi = temp;
		++i;
		printf("%d\n",ikincisayi);	
		
		
	}
	
	
	
	
	
	return 0;
}
