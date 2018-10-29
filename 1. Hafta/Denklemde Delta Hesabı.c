#include <stdio.h>

int main()
{
    int a,b,c;
    printf("x karenin katsayisi: ");
    scanf("%d",&a);
    printf("x'in katsayisi: ");
    scanf("%d",&b);
    printf("sabit katsayi: ");
    scanf("%d",&c);

    int delta = b*b-4*a*c;
    printf("Delta: %d\n",delta);

    if(delta>0) {
        printf("Farkli 2 Kok Var.");
    }
    else if(delta<0) {
        printf("Reel Kok Yok.");
    }
    else {
        printf("Cakisik 1 Kok Var.");
    }
    return 0;
}

//Alperen Cubuk