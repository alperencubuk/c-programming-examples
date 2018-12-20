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
	srand(time(NULL));
	int i,j;
	for(i=0;i<satir;i++) {
		for(j=0;j<sutun;j++) {
			matris[i][j]=1+rand()%9;
		}
	}
}

void matrisYazdir(int satir, int sutun, int matris[][sutun]) {
	int i,j;
	for(i=0;i<satir;i++) {
		for(j=0;j<sutun;j++) {
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}
}

int satirToplamMax(int satir, int sutun, int matris[][sutun]) {
	int i,j,toplamlar[satir];
	for(i=0;i<satir;i++) {
		toplamlar[i]=0;
	}
	for(i=0;i<satir;i++) {
		for(j=0;j<sutun;j++) {
			toplamlar[i]+=matris[i][j];
		}
	}
	int max=toplamlar[0];
	for(i=1;i<satir;i++) {
		if(toplamlar[i]>max) {
			max=toplamlar[i];
			maxSatir=i;
		}
	}
	return max;
}

int sutunToplamMin(int satir, int sutun, int matris[][sutun]) {
	int i,j,toplamlar[sutun];
	for(i=0;i<sutun;i++) {
		toplamlar[i]=0;
	}
	for(i=0;i<sutun;i++) {
		for(j=0;j<satir;j++) {
			toplamlar[i]+=matris[j][i];
		}
	}
	int min=toplamlar[0];
	for(i=1;i<sutun;i++) {
		if(toplamlar[i]<min) {
			min=toplamlar[i];
			minSutun=i;
		}
	}
	return min;
}

// Alperen Cubuk
