#include <stdio.h>

int main() {
	while(1) {
		printf("1. Toplama\n");
		printf("2. Cikarma\n");
		printf("3. Carpma\n");
		printf("4. Bolme\n");
		printf("5. Cikis\n");
		printf("\nSeciminiz: ");
		int secim;
		scanf("%d",&secim);
		if (secim==5) {
			printf("\nUygulama sonlandirildi.\n");
			break;
		}
		if (secim<1 || secim >5) {
			printf("\nHatali Secim Yaptiniz.\n\n");
			continue;
		}
		int sayi1,sayi2;
		printf("1. Sayiyi Girin: ");
		scanf("%d",&sayi1);
		printf("2. Sayiyi Girin: ");
		scanf("%d",&sayi2);
		if (secim==1) {
			printf("\n%d + %d = %d\n\n",sayi1,sayi2,sayi1+sayi2);
		}
		else if (secim==2) {
			printf("\n%d - %d = %d\n\n",sayi1,sayi2,sayi1-sayi2);
		}
		else if (secim==3) {
			printf("\n%d * %d = %d\n\n",sayi1,sayi2,sayi1*sayi2);
		}
		else { // (secim==4)
			if (sayi2==0) {
				printf("\n%d / %d = Tanimsiz\n\n",sayi1,sayi2);
			}
			else {
				printf("\n%d / %d = %.2f\n\n",sayi1,sayi2,(float)sayi1/sayi2);
			}
		}
	}
}

// Alperen Cubuk