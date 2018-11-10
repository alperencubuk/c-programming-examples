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
	
	int ilk = 0;
	int son = n-1;
	int orta = (ilk+son) / 2;
	int sayac = 0;
	
	while(ilk<=son) {
		if(dizi[orta]<aranan) {
			ilk = orta + 1;
			sayac++;
		}
		else if(dizi[orta]>aranan) {
			son = orta - 1;
			sayac++;
		}
		else {
			sayac++;
			printf("%d. indiste %d bulundu.\nDeneme Sayisi: %d\n", orta, aranan, sayac);
			break;
		}
		orta = (ilk + son) / 2;
	}
	if(ilk>son) {
		printf("%d Bulunamadi.\n", aranan);
	}
	
	return 0;
}

// Alperen Cubuk
