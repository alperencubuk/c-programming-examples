#include <stdio.h>

// Klavyeden sifir girilene kadar girilen sayilari topla

int main()
{
    int sayi=1;
    int toplam=0;
    while(sayi!=0)
    {
        printf("Bir Sayi Giriniz: ");
        scanf("%d",&sayi);
        toplam+=sayi;
    }
    printf("Toplam: %d",toplam);
    return 0;
}

//Alperen Cubuk