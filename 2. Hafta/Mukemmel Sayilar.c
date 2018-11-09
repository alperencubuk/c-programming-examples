#include <stdio.h>

int main() {
	int i,j,toplam=0;
	for(i=1;i<=1000;i++) {
    	toplam=0;
    	for(j=1;j<=i/2;j++) {
        	if(i%j==0) {
            	toplam+=j;
        	}
    	}
    	if(toplam==i) {
        	printf("%d\n",i);
    	}
	}
    return 0;
}

// Alperen Cubuk
