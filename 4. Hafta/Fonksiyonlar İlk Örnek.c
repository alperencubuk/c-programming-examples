#include <stdio.h>

void merhaba();
int topla(int a, int b);
void yazdir(int t);

int main() {
	merhaba();
	int sayi1=9, sayi2=15;
	int sonuc = topla(sayi1,sayi2);
	yazdir(sonuc);
	return 0;
}

void merhaba() {
	printf("Merhaba\n");
}

int topla(int a, int b) {
	return a+b;
}

void yazdir(int t) {
	printf("%d",t);
}

// Alperen Cubuk
