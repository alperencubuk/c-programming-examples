#include <stdio.h>
#include <math.h>

void asal1(int n);
int asal2(int n);

int main() {
	asal1(100);
	printf("\n\n%d",asal2(5));
	return 0;
}

void asal1(int n) {
	int i,j;
	if(n>=2)
		printf("2\n");
	if(n>=3)
		printf("3\n");
	for (i=5;i<=n;i+=2) {
		int asal=1;
		for(j=3;j<=sqrt(i);j++) {
			if(i%j==0) {
				asal=0;
				break;
			}
		}
		if(asal) {
			printf("%d\n",i);
		}
	}
}

int asal2(int n) {
	if(n==1) {
		return 2;
	}
	else if(n==2) {
		return 3;
	}
	else {
		int i,j,sayac=2;
		for (i=5; ;i+=2) {
			int asal=1;
			for(j=3;j<=sqrt(i);j++) {
				if(i%j==0) {
					asal=0;
					break;
				}
			}
			if(asal) {
				sayac++;
			}
			if(n==sayac)
				return i;
		}
	}
}

// Alperen Cubuk
