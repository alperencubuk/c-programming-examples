#include <stdio.h>
#define N 10

int main() {
	int i,j;
	for(i=1;i<=N;i++) {
		for(j=0;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

// Alperen Cubuk
