#include <stdio.h>

int main() {
	int taban,us;
	printf("Taban: ");
	scanf("%d",&taban);
	printf("Us: ");
	scanf("%d",&us);
	if (us<0)
		us=-us;
	int i,sonuc=1;
	for (i=0;i<us;i++) {
		sonuc*=taban;
	}
	printf("%d uzeri %d = %d",taban,us,sonuc);
	return 0;
}

// Alperen Cubuk