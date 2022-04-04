#include<locale.h>
#include<stdio.h>

#define MAX 50 
//kabarc�k s�ralama algoritmas�

void bubblesort(int arr[], int size) { //bu algoritma say�lar�n s�ralanmas�n� sa�lamaktad�r. //size= arrayin  eleman say�s� oluyor. arr[]= array.
	int i, j;
	
	for (i=0; i <size; ++i) { //arrayin ilk eleman�n� 0 ile temsil edebildi�imiz i�in i'yi s�f�rdan ba�latt�k.
		for (j=1; j<size; ++j) { //j'yi 1 den ba�latarak 2. eleman ile 1.eleman� k�yaslayabilece�iz.
			if (arr[j-1] > arr[j]) { // 1. eleman, 2. elemandan b�y�k m�? (de�ilse sorun yok) b�y�kse if blo�una girer.
				int temp = arr[j]; //(temp = ge�ici anlam�na geliyor) arrayin 2.eleman�n� (veya bir sonraki elemanlar�ndan birisini) ge�iciye atar.
				arr[j] = arr[j-1]; //1. eleman� (yani b�y�k olan eleman�) 2. eleaman�n yerine (elemanlar� soldan sa�a d���n�rsek sa� tarafa ta��r) koyar.
				arr[j-1] = temp; // 2. eleman� (k���k olan�) 1.nin yerine koyar.
				/*Bu algoritma, arrayin solundan ba�layarak birinci ile ikinciyi k�yaslar. 1. > 2. de�ilse 2.eleman ile 3.y� k�yaslar. 2. > 3. ise 
				2. ile 3. eleman�n yerini de�i�tirir, ve d�ng� devam eder. Bir sonraki turdaysa yeni 3.eleman ile 4.eleman� k�yaslar. Taki size'a atanan de�ere gelene kadar.
				*/
				/*
				i d�ng�s� ise �rne�in 5 eleman varsa 5'ini de kontrol etmeye sa�l�yor.
				*/
			}
		}
	}
	
	
}




int main () {
	setlocale(LC_ALL, "Turkish");
	int array[MAX], size, i; //define = MAX oldu�u i�in MAX yaz�ld�. Direkt olarak yaz�lsa yine �al���rd�.
	
	printf("Say� k�mesi ka� elemanl� olacak? ");
	scanf("%d", &size); //burada size al�narak arrayin boyutunu belirlemi� olduk. Dolay�s�yla i ve j d�ng�s�n� belirlemi� olduk.
	
	for (i=0; i<size; ++i) { //array'i doldurabilmek i�in bu d�ng�y� ba�latt�k.
		scanf("%d", &array[i]);
	}
	
	bubblesort(array, size); //fonksiyona array adl� arrayi ve boyutunu g�nderdik.
	
	for (i=0; i<size; ++i) { //fonkisyondan gelen arrayin son halini s�ralam�� olduk.
		printf("%d ", array[i]);
	}
	

	
	
	
	
	
	return 0;
}
