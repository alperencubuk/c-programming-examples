#include <stdio.h>

int main() {
	const int dizi[] = {12,17,13,24,8};
	// Dizinin const olmasi diziyi sabitler. Yani elemanlarinin degistirilemeyecegini garanti eder.
	// dizi[0]=5; // gibi bir atama hata verecektir.
	int boyut = sizeof(dizi)/sizeof(dizi[0]);
	// printf("%d\n",sizeof(dizi));
	// printf("%d\n\n",sizeof(dizi[0]));
	/* Sizeof fonksiyonu verilen dizi veya deðiskenin bellekte kac bayt yer kapladigini geri dondurur.
	Bir dizinin bellekte kapladigi toplam boyutu bir elemaninin kapladigi boyuta bolersek dizinin eleman sayisini elde ederiz.
	Dizimiz int tipinde oldugundan her bir eleman bellekte 4 baytlýk yer kaplamaktadýr.
	Bu durumda dizi toplam 20 bayt yer kaplýyor. Dizinin 0. indisindeki eleman ise 4 bayt yer kaplýyor.
	20/4 = 5 bize dizinin eleman sayisini verecektir. */
	printf("En buyuk sayi: %d",en_buyuk(dizi,boyut));
	return 0;
}

int en_buyuk(int array[], int size) {
	int max=array[0];
	int i;
	for(i=1;i<size;i++) {
		if (array[i]>max) {
			max=array[i];
		}
	}
	return max;
}

// Alperen Cubuk
