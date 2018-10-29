#include <stdio.h>

int main()
{
    int yas;
    printf("Yas Giriniz: ");
    scanf("%d",&yas);

    if(yas<18) {
        printf("Cocuksunuz (0-18)");
    }
    else if(yas>=18 && yas<30) {
        printf("Gecnsiniz (18-29)");
    }
    else {
        printf("Yaslisiniz (30+)");
    }
    return 0;
}

//Alperen Cubuk