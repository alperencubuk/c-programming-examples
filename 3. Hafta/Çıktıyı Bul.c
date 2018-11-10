#include <stdio.h>

int main() {
	int dizi[5]={1,8,4,5,9};
	int i, x=0, s=32; 
	for(i=0;i<5;i++) {
		if(dizi[i]>s)
			break;
		else {
			x +=  dizi[i]*dizi[i];
			s /= 2; 
		}
	}
	printf("%d", x);
	return 0;
}

// Alperen Cubuk
