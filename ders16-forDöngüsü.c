#include<stdio.h>
#include<locale.h>

/*

for (ilk ara; ikinci ara; üçüncü ara;)
ilk araya baþlangýç deðerlerini atýyoruz. eðer birden fazla baþlangýç deðeri atayacaksak bu deðerleri virgülle ayýrýrýz,
ikinci araya þartlarý (<,>,&&,|| vb) yazarýz. ör: ilk ara; i<10 && j>12; üçüncü ara gibi.
üçüncü ara yapmak istediðimizi yazarýz ör: i++, j++ gibi gibi

for (i=1; i<10; ++i)
ilk seferde i, 1'e eþitlenir ve for'a girer. for'un en sonuna geldiðinde ++i emrini gerçekleþtirir. baþa döner ve
i<10 þartýnýn saðlanýp saðlanmadýðýný kontrol eder ve bu þart bozulana kadar bu þekilde devam eder.
*/


int main() {
	
	int i,n,a;	

	while (a<2) {		
	setlocale(LC_ALL, "Turkish");
	printf("saymasýný istediðin sayýyý yaz: ");
	scanf("%d",&n);
		
		
		for (i=1; i<=n; ++i) {
		
			printf("%d\n",i);
		
		
		}
	
	printf("\ndevam 1, iptal 2: ");
	scanf("%d",&a);
}
	
	
	
	return 0;
}
