#include <stdio.h>

int main() {
	int matris1[3][3]={1,2,3,4,5,6,7,8,9};
	int matris2[3][3]={1,2,3,4,5,6,7,8,9};
	int toplam[3][3], fark[3][3];
	int satir,sutun;
	for(satir=0;satir<3;satir++) {
		for(sutun=0;sutun<3;sutun++) {
			toplam[satir][sutun] = matris1[satir][sutun] + matris2[satir][sutun];
			fark[satir][sutun] = matris1[satir][sutun] - matris2[satir][sutun];
		}
	}
	printf("Toplam:\n\n");
	for(satir=0;satir<3;satir++) {
		for(sutun=0;sutun<3;sutun++) {
			printf("%2d ",toplam[satir][sutun]);
		}
		printf("\n");
	}
	printf("\nFark:\n\n");
	for(satir=0;satir<3;satir++) {
		for(sutun=0;sutun<3;sutun++) {
			printf("%2d ",fark[satir][sutun]);
		}
		printf("\n");
	}
	return 0;
}

// Alperen Cubuk
