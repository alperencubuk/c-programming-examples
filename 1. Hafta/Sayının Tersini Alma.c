#include <stdio.h>

int main() {
	printf("Bir Sayi Giriniz: ");
	int sayi;
	scanf("%d",&sayi);
	int yedek=sayi;
	int ters=0;
	while(sayi>0) {
		ters*=10; //ters=ters*10;
		ters+=sayi%10; //ters=ters+sayi%10;
		sayi/=10; //sayi=sayi/10;
	}
	sayi=yedek;
	printf("Sayinin Tersi: %i\n",ters);
	printf("Tersinin 2 Kati: %i\n",ters*2);
	printf("Sayinin Kendisi: %i\n",sayi);
	return 0;
}

// Alperen Cubuk
