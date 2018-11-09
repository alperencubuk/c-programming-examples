#include <stdio.h>
#include <math.h>
#define N 5

int main() {
	int sayilar[N];
	int i,toplam=0;
	for(i=0;i<N;i++) {
		printf("%d. Sayiyi Girin: ",i+1);
		scanf("%d",&sayilar[i]);
		toplam+=sayilar[i];
	}
	float ortalama=(float)toplam/N;
	printf("Ortalama:%.2f\n",ortalama);
	int pay=0;
	for(i=0;i<N;i++) {
		pay+=pow(sayilar[i]-ortalama,2);
	}
    float sapma=sqrt((float)pay/(N-1));
	printf("Sapma: %f\n",sapma);
	return 0;
}

// Alperen Cubuk
