#include <stdio.h>

struct karmasik
{
    int gercek;
    int sanal;
};

int main() {
    struct karmasik n1, n2, toplam;
	char i;
	
    printf("1. Karmasik Sayi: ");
    scanf("%d%d%c", &n1.gercek ,&n1.sanal, &i);
    // 5+4i gibi veri verilir
    
    printf("2. Karmasik Sayi: ");
    scanf("%d%d%c", &n2.gercek, &n2.sanal, &i);
	// 5+4i gibi veri verilir
	
	toplam.gercek = n1.gercek + n2.gercek;
    toplam.sanal = n1.sanal + n2.sanal;

    printf("Toplam = %d + %di", toplam.gercek, toplam.sanal);

    return 0;
}

// Alperen Cubuk
