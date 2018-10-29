#include <stdio.h>

int main() {
	char metin[100];
	printf("Metin: ");
	gets(metin); //scanf("%s",metin);
	int i,sayac=0;
	for (i=0;metin[i]!='\0';i++) {
		sayac++;
	}
	printf("Metindeki karakter sayisi: %d",sayac);
	return 0;
}

// Alperen Cubuk