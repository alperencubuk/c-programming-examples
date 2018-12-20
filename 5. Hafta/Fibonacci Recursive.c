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
    int sonuc = fibonacci(sayi-1) + fibonacci(sayi-2);
    return sonuc;
}

// Alperen Cubuk
