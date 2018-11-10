#include <stdio.h>

int main() {
	int i,kontrol=0;
	int sayi=2520;
	while(kontrol==0) {
		for(i=20;i>10;i--) {
			if (sayi%i!=0) {
				sayi+=2520;
				break;
			}
			if(i==11)
				kontrol=1;	
		}
	}
	printf("Sonuc: %d",sayi);
	return 0;
}

// Alperen Cubuk
