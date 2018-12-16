#include <stdio.h>

int fac(int sayi);

int main() {
    int n;
    printf("Sayi: ");
    scanf("%d",&n);
    int sonuc = fac(n);
    printf("%d",sonuc);
    return 0;
}

int fac(int sayi) {
    if( sayi < 0)
        return 0;
    if( sayi==0 || sayi==1)
        return 1;
    return fac(sayi-1)*sayi;
}
