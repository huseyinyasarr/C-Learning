#include<locale.h>
#include<stdio.h>

#define MAX 50 
//kabarcýk sýralama algoritmasý

void bubblesort(int arr[], int size) { //bu algoritma sayýlarýn sýralanmasýný saðlamaktadýr. //size= arrayin  eleman sayýsý oluyor. arr[]= array.
	int i, j;
	
	for (i=0; i <size; ++i) { //arrayin ilk elemanýný 0 ile temsil edebildiðimiz için i'yi sýfýrdan baþlattýk.
		for (j=1; j<size; ++j) { //j'yi 1 den baþlatarak 2. eleman ile 1.elemaný kýyaslayabileceðiz.
			if (arr[j-1] > arr[j]) { // 1. eleman, 2. elemandan büyük mü? (deðilse sorun yok) büyükse if bloðuna girer.
				int temp = arr[j]; //(temp = geçici anlamýna geliyor) arrayin 2.elemanýný (veya bir sonraki elemanlarýndan birisini) geçiciye atar.
				arr[j] = arr[j-1]; //1. elemaný (yani büyük olan elemaný) 2. eleamanýn yerine (elemanlarý soldan saða düþünürsek sað tarafa taþýr) koyar.
				arr[j-1] = temp; // 2. elemaný (küçük olaný) 1.nin yerine koyar.
				/*Bu algoritma, arrayin solundan baþlayarak birinci ile ikinciyi kýyaslar. 1. > 2. deðilse 2.eleman ile 3.yü kýyaslar. 2. > 3. ise 
				2. ile 3. elemanýn yerini deðiþtirir, ve döngü devam eder. Bir sonraki turdaysa yeni 3.eleman ile 4.elemaný kýyaslar. Taki size'a atanan deðere gelene kadar.
				*/
				/*
				i döngüsü ise örneðin 5 eleman varsa 5'ini de kontrol etmeye saðlýyor.
				*/
			}
		}
	}
	
	
}




int main () {
	setlocale(LC_ALL, "Turkish");
	int array[MAX], size, i; //define = MAX olduðu için MAX yazýldý. Direkt olarak yazýlsa yine çalýþýrdý.
	
	printf("Sayý kümesi kaç elemanlý olacak? ");
	scanf("%d", &size); //burada size alýnarak arrayin boyutunu belirlemiþ olduk. Dolayýsýyla i ve j döngüsünü belirlemiþ olduk.
	
	for (i=0; i<size; ++i) { //array'i doldurabilmek için bu döngüyü baþlattýk.
		scanf("%d", &array[i]);
	}
	
	bubblesort(array, size); //fonksiyona array adlý arrayi ve boyutunu gönderdik.
	
	for (i=0; i<size; ++i) { //fonkisyondan gelen arrayin son halini sýralamýþ olduk.
		printf("%d ", array[i]);
	}
	

	
	
	
	
	
	return 0;
}
