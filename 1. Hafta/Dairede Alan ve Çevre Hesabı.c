#include <stdio.h>
#define PI 3.14

int main()
{
    int r;

    printf("Yaricap girin: ");
    scanf("%d",&r);

    float alan = PI * r * r;
    float cevre = 2 * PI * r;

    printf("Alan: %f\n",alan);
    printf("Cevre: %f\n",cevre);
    return 0;
}

//Alperen Cubuk