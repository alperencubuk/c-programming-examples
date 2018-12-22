#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr,n,i,toplam=0;

    printf("Dizi Boyutu: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL) {
        printf("HATA! Yeterli bellek yok.");
        return 0;
    }
    
    for(i=0;i<n;i++) {
    	printf("%d Sayi: ",i+1);
        scanf("%d",ptr+i);
        toplam += *(ptr+i);
    }

    printf("Toplam = %d", toplam);
    free(ptr);
    
    return 0;
}

// Alperen Cubuk
