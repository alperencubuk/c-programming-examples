#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0)); //srand(time(NULL));
	int sayi=rand()%101;
	int tahmin;
	printf("Tahmin Girin (0-100): ");
	do {
		scanf("%d",&tahmin);
		if(tahmin>sayi) {
			printf("Daha Kucuk Bir Tahmin Girin: ");
		}
		else if(tahmin<sayi) {
			printf("Daha Buyuk Bir Tahmin Girin: ");
		}
		else {
			printf("Tebrikler! Dogru Tahmin.");
		}
	} while(sayi!=tahmin);
	return 0;
}

// Alperen Cubuk