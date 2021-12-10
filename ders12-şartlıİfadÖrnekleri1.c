#include<stdio.h>
#include<locale.h>

/*

90-100 AA
85-90 BA
80-85 BB
75-80 CB
70-75 CC
65-70 DC
60-65 DD
50-60 FD
0-50 FF


*/


int main() {
	
	int vize1,vize2,final;
	float ort;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	
	ort = (vize1+vize2+final)/3.0;
	printf("ders ortalamanýz %.2f\n",ort);
	
	if(ort >= 90) {
		printf("Dersi AA ile geçtiniz.");
	}
	
	else if(ort >= 85) {
		printf("Dersi BA ile geçtiniz.");
	}
	
	else if(ort >= 80) {
		printf("Dersi BB ile geçtiniz.");
	}
	
	else if(ort >= 75) {
		printf("Dersi CB ile geçtiniz.");
	}
	
	else if(ort >= 70) {
		printf("Dersi CC ile geçtiniz.");
	}
	
	else if(ort >= 65) {
		printf("Dersi DC ile geçtiniz.");
	}
	
	else if(ort >= 60) {
		printf("Dersi DD ile geçtiniz.");
	}
	
	else if(ort >= 50) {
		printf("Dersi FD ile geçtiniz.");
	}
	
	else {
		printf("FF, kaldýnýz.");
	}
	
	
	return 0;
}
