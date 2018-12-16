#include <stdio.h>

int us_al(int taban, int us);

int main() {
	int taban,us;
	printf("Taban: ");
	scanf("%d",&taban);
	printf("Us: ");
	scanf("%d",&us);
	printf("%d uzeri %d = %d", taban, us, us_al(taban,us));
	return 0;
}

int us_al(int taban, int us) {
	if (us<0) {
		us=-us;
		printf("\nUYARI: Taban Pozitif Kabul Edildi.\n\n");
	}
	int i,sonuc=1;
	for (i=0;i<us;i++) {
		sonuc*=taban;
	}
	return sonuc;
}

// Alperen Cubuk
