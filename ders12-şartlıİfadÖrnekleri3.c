#include<stdio.h>
#include<locale.h>


int main() {
	
	int a,b;
	
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Girdi�iniz say� tek mi �ift mi?");
	printf("\nSay� giriniz: ");
	scanf("%d",&a);
	
	b = a%2;
	
	
	if(b==0) {
		
		printf("Girdi�iniz say� �ifttir.");
	}
	

	else{
		printf("Girdi�iniz say� tektir.");
	}
	
	
	
	
	return 0;
}
