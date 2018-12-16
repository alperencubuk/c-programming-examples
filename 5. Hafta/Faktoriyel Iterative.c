#include <stdio.h>

int fac(int sayi);

int main() {
    int n;
    printf("Sayi: ");
    scanf("%d",&n);
    int sonuc = fac(n);
    printf("%d",sonuc);
    return 0;
}

int fac(int sayi) {
	int i,sonuc=1;
	for(i=1;i<=sayi;i++) {
		sonuc*=i;
	}
	return sonuc;
}

// Alperen Cubuk