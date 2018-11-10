#include <stdio.h>
 
int main() {
	
	int n=1000;
	int i, dizi[n];
	
	for(i=0;i<n;i++) {
		dizi[i]=i+1;
	}
	
	int aranan;
	printf("Dizide 1-1000 arasi sayilar tutulmaktadir.\nAranacak Sayiyi Girin: ");
	scanf("%d", &aranan);
	
	int sayac = 0;
	for(i=0;i<n;i++) {
		if(dizi[i]==aranan) {
			printf("%d. indiste %d bulundu.\nDeneme Sayisi: %d\n", i, aranan, ++sayac);
			break;
		}
		else if(i==n-1)
			printf("%d Bulunamadi.",aranan);
		else
			sayac++;
	}
	
	return 0;
}

// Alperen Cubuk
