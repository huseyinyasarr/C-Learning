#include<stdio.h>
#include<locale.h>

/*
if(a) {    //e�er a=0 ise bu false anlam�na gelir. e�er a, 0'a e�it olmayan herhangi bir say�ysa true anlam�na gelir.

}


MANTIKSAL OPERAT�RLER

< ---- k���k m�d�r? a < b, a, b'den k���k m�d�r?
> ---- b�y�k m�d�r? a > b, b, a'dan b�y�k m�d�r?
<= --- k���k e�ittir midir?
>= --- b�y�k e�ittir midir?

== --- birbirlerine e�it midir? a == b gibi       | Bu ikisi
!= --- birbirlerine e�it de�il midir? a != b gibi | birbirinin z�tt�d�r.

*/

/*
MANTIKSAL BA�LA�LAR (matematik mant�k)
Bir �ok mant�ksal ifadeyi birbirine ba�lar.


&& ----> and (ve) ba�lac�. true && true && false gibi ba�land���nda bunun sonucu falsedir
and ba�lac�n�n oldu�u c�mlede herhangi bir false varsa c�mle yanl�� kabul edilir.
c�mlenin do�ru kabul edilebilmesi i�in hepsi true olmas� gerekir.

|| ----> or (ya da) ba�lac�d�r. true || true || false c�mlesinin sonucu true'dur. c�mlenin i�inde herhangi bir true varsa c�mle true kabul edilir.
c�mlenin yanl�� olabilmesi i�in hepsinin false olmas� gerekir.

! -----> not (de�il) ba�lac�d�r. Birbirlerini z�tt�na �evirir. true'ya not eklenirse false, false'a not eklenirse true olur. !true = false, !false = true

*/

/*
�ARTLI C�MLELER

a = x > y ? x: y;  // ? anlam�, ise. x, y'den b�y�kse bunun sonucu x'dir, de�ilse y'dir.

*/


int main() {
	
	
	int a,b=16,c=61;  // a belli de�ildir. b=16, c=61 demektir.
	
	a = c > b ? c: b;
	
	printf("%d",a);
	
	
	
	
	
	
	setlocale(LC_ALL, "Turkish");
	
	
	
	
	
	
	
	
	
	
	return 0;
}
