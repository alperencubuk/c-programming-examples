#include <stdio.h>
#define N 5

int main() {
	int dizi[N];
	int i;
	for(i=0;i<N;i++) {
		printf("%d. Elemani Girin: ",i+1);
		scanf("%d",&dizi[i]);
	}
	int max=dizi[0];
	int indis=0;
	for(i=1;i<N;i++) {
		if (dizi[i]>max) {
			max=dizi[i];
			indis=i;
		}
	}
	printf("En buyuk sayi %d. indisteki %d'dir.",indis,max);
	return 0;
}

// Alperen Cubuk