#include <stdio.h>

struct isim
{
    int a;
    int b;
} nesne;

int main() {
	
    nesne.a=5;
    nesne.b=3;
    
    printf("%d",nesne.a + nesne.b);

    return 0;
}

// Alperen Cubuk
