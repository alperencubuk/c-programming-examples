#include <stdio.h>

void fonksiyon(int);
void pointer(int *);

int main() {
    int f=1;
    fonksiyon(f);
    printf("f: %d\n",f);
    
    int p=1;
    pointer(&p);
    printf("p: %d\n",p);
	
    return 0;
}

void fonksiyon(int f) {
	f=10;
}

void pointer(int *p) {
	*p=10;
}

// Alperen Cubuk
