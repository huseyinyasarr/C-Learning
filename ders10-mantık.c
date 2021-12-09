#include<stdio.h>
#include<locale.h>

/*
if(a) {    //eðer a=0 ise bu false anlamýna gelir. eðer a, 0'a eþit olmayan herhangi bir sayýysa true anlamýna gelir.

}


MANTIKSAL OPERATÖRLER

< ---- küçük müdür? a < b, a, b'den küçük müdür?
> ---- büyük müdür? a > b, b, a'dan büyük müdür?
<= --- küçük eþittir midir?
>= --- büyük eþittir midir?

== --- birbirlerine eþit midir? a == b gibi       | Bu ikisi
!= --- birbirlerine eþit deðil midir? a != b gibi | birbirinin zýttýdýr.

*/

/*
MANTIKSAL BAÐLAÇLAR (matematik mantýk)
Bir çok mantýksal ifadeyi birbirine baðlar.


&& ----> and (ve) baðlacý. true && true && false gibi baðlandýðýnda bunun sonucu falsedir
and baðlacýnýn olduðu cümlede herhangi bir false varsa cümle yanlýþ kabul edilir.
cümlenin doðru kabul edilebilmesi için hepsi true olmasý gerekir.

|| ----> or (ya da) baðlacýdýr. true || true || false cümlesinin sonucu true'dur. cümlenin içinde herhangi bir true varsa cümle true kabul edilir.
cümlenin yanlýþ olabilmesi için hepsinin false olmasý gerekir.

! -----> not (deðil) baðlacýdýr. Birbirlerini zýttýna çevirir. true'ya not eklenirse false, false'a not eklenirse true olur. !true = false, !false = true

*/

/*
ÞARTLI CÜMLELER

a = x > y ? x: y;  // ? anlamý, ise. x, y'den büyükse bunun sonucu x'dir, deðilse y'dir.

*/


int main() {
	
	
	int a,b=16,c=61;  // a belli deðildir. b=16, c=61 demektir.
	
	a = c > b ? c: b;
	
	printf("%d",a);
	
	
	
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	
	
	
	
	
	
	
	
	
	return 0;
}
