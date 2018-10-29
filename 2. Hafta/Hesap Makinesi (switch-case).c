#include <stdio.h>

int main() {
	printf("1. Toplama\n");
	printf("2. Cikarma\n");
	printf("3. Carpma\n");
	printf("4. Bolme\n");
	printf("5. Cikis\n");
	printf("\nSeciminiz: ");
	int secim;
	scanf("%d",&secim);
	int sayi1,sayi2;
	switch (secim) {
		case 1:
			printf("1. Sayiyi Girin: ");
			scanf("%d",&sayi1);
			printf("2. Sayiyi Girin: ");
			scanf("%d",&sayi2);
			printf("\n%d + %d = %d\n\n",sayi1,sayi2,sayi1+sayi2);
			break;
		case 2:
			printf("1. Sayiyi Girin: ");
			scanf("%d",&sayi1);
			printf("2. Sayiyi Girin: ");
			scanf("%d",&sayi2);
			printf("\n%d - %d = %d\n\n",sayi1,sayi2,sayi1-sayi2);
			break;
		case 3:
			printf("1. Sayiyi Girin: ");
			scanf("%d",&sayi1);
			printf("2. Sayiyi Girin: ");
			scanf("%d",&sayi2);
			printf("\n%d * %d = %d\n\n",sayi1,sayi2,sayi1*sayi2);
			break;
		case 4:
			printf("1. Sayiyi Girin: ");
			scanf("%d",&sayi1);
			printf("2. Sayiyi Girin: ");
			scanf("%d",&sayi2);
			if (sayi2==0) {
				printf("\n%d / %d = Tanimsiz\n\n",sayi1,sayi2);
			}
			else {
				printf("\n%d / %d = %.2f\n\n",sayi1,sayi2,(float)sayi1/sayi2);
			}
			break;
		case 5:
			printf("\nUygulama sonlandirildi.\n");
			return 0;
		default:
			printf("\nHatali Secim Yaptiniz.\n\n");
	}
	return 0;
}

// Alperen Cubuk