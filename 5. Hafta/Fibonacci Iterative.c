#include <stdio.h>
#include <stdlib.h>

int fibonacci(int sayi);

int main() {
    int n;
    printf("Sayi giriniz:"); scanf("%d",&n);
    printf("%d. Fibonacci Sayisi: %d",n,fibonacci(n));
    return 0;
}

int fibonacci(int sayi) {
	if(sayi<0)
		return 0;
	switch (sayi) {
		case 0: return 0;
		case 1: return 1;
	}
	int i,sonuc,f0=0,f1=1;
	for (i=2;i<=sayi;i++) {
		sonuc = f0 + f1;
		f0 = f1;
		f1 = sonuc;
	}
    return sonuc;
}

// Alperen Cubuk
