#include <stdio.h>
#define PI 3.14

float alan(int r);

int main() {
	int yaricap;
	printf("Yaricap Girin: ");
	scanf("%d",&yaricap);
	printf("Alan: %.2f",alan(yaricap));
	return 0;
}

void merhaba() {
	printf("Merhaba\n");
}

float alan(int r) {
	return PI * r * r;
}

// Alperen Cubuk
