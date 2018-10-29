#include <stdio.h>

int main()
{
    int sayi = 1234;
    int basamak1 = sayi/1000; // 1
    int basamak2 = sayi/100%10; // 2
    int basamak3 = sayi/10%10; // 3
    int basamak4 = sayi%10; //4

    int toplam = basamak1 + basamak2 + basamak3 + basamak4;
    printf("Toplam: %d",toplam);

    return 0;
}

//Alperen Cubuk