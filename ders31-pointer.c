#include<locale.h>
#include<stdio.h>


int main() {
	setlocale(LC_ALL,"Turkish");
	
/*	bunþar giriþ ve tekrar amaçlý


	int a = 1, *ap; //buradaki ap tamamen uydurmadýr. a, pointer anlamýna gelir. Kafa karýþýklýðýna yol açmasýn diyerekten bu þekilde yapýlýr.j
	float b = 3.12, *bp;
	double c = 4.144, *cp;
	char d = 'h', *dp;
		
	int sayilar[5] = {1,2,3,4,5}, *arrayp;
	
	// bundan sonra burdaki pointerlerin nereye ait olduðunu göstermemiz gerekiyor.,
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	arrayp = &sayilar[4]; // sayilar arrayinin 4. elemanýnýn adresi 
	
	printf("%u adresindeki deðer %d'dir.\n",ap,*ap);
	printf("%u adresindeki deðer %f'dir.\n",bp,*bp);
	printf("%u adresindeki deðer %f'dir.\n",cp,*cp);
	printf("%u adresindeki deðer %c'dir.\n",dp,*dp);
	printf("%u adresindeki deðer %d'dir.\n",arrayp,*arrayp);	
*/	
	
	int i,j; //i ile j'yi tanýmladýk.
	j = 1; // j ye 1 deðerini verdik.
	
	int *jp1,*jp2; //jp1 ve jp2 pointerlerini tanýmladýk. Pointer olduðunu anlatabilmek için * kullandýk.
		
	jp2 = &j; //*jp2 pointeri, j'nin adresini almasýný istedik. (j nin adresini tutmaýsný istediðimiz için & kullandýk)
	
	jp1 = jp2; //jp2 yi jp1 e eþitledi. artýk jp2 deki adresle jp1 deki adres ayný oldu. yukarýda *jp2 j'nin adresini tuttuðu için (bu adres 1000 olsun) artýk jp1'de de 1000. adres var.
	i = ++(*jp2); //jp2 pointerýna gitti. Sonrasýnda oradaki adrese gitti ve * sayesinde deðerini getirdi. *jp2 = 1 olduðu için ve ++ ile 1 arttýrdýðý için i = 2'dir.
	//++ sayesinde *jp2 deki deðer 1 artmýþ oldu. jp2 deki adresle jp1 deki adrees yukarýda eþit olduðu için artýk *jp1' de 2'dir.
	
	*jp2 = *jp1 +i; //*jp1 deki deðer 2, i'nin deðeri (2) bu durumda *jp2 deki deðer 2+2 den 4 olur. *jp2 = 4 olduðundan j de artýk 4',tür.
	
	printf("i = %d, j = %d, *jp1 = %d, *jp2 = %d",i,j,*jp1,*jp2); //i = 2, j = 4, *jp1 = 4, *jp2 = 4

	
	
	
	
	return 0;
}
