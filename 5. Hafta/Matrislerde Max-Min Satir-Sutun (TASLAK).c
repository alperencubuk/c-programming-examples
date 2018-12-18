#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setMatrisRandom(int satir, int sutun, int matris[][sutun]);
void matrisYazdir(int satir, int sutun, int matris[][sutun]);
int satirToplamMax(int satir, int sutun, int matris[][sutun]);
int sutunToplamMin(int satir, int sutun, int matris[][sutun]);

int maxSatir=0;
int minSutun=0;

int main() {
	int satir,sutun;
	do {
		printf("Satir (1-99): "); scanf("%d",&satir);
	} while(satir<0 || satir>99);

	do {
		printf("Sutun (1-99): "); scanf("%d",&sutun);
	} while(sutun<0 || sutun>99);
	
	printf("\n");
	int matris[satir][sutun];
	
	setMatrisRandom(satir,sutun,matris);
	matrisYazdir(satir,sutun,matris);
	
	int yatayMax = satirToplamMax(satir,sutun,matris);
	int dikeyMin = sutunToplamMin(satir,sutun,matris);
	
	printf("\n(%d. Satir) - Satir Max Toplam: %d",maxSatir+1,yatayMax);
	printf("\n(%d. Sutun) - Sutun Min Toplam: %d",minSutun+1,dikeyMin);
	
	return 0;
}

void setMatrisRandom(int satir, int sutun,int matris[][sutun]) {
	// KODUNUZU BURAYA YAZIN
}

void matrisYazdir(int satir, int sutun, int matris[][sutun]) {
	// KODUNUZU BURAYA YAZIN
}

int satirToplamMax(int satir, int sutun, int matris[][sutun]) {
	// KODUNUZU BURAYA YAZIN
}

int sutunToplamMin(int satir, int sutun, int matris[][sutun]) {
	// KODUNUZU BURAYA YAZIN
}

/* ORNEK CIKTI:

Satir: 4
Sutun: 4

3  5  6  3
5  8  1  7
2  4  8  7
6  6  8  8

(4. Satir) - Satir Max Toplam: 28
(1. Sutun) - Sutun Min Toplam: 16

*/
