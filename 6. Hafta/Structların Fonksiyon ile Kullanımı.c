#include <stdio.h>

struct ogrenci
{
	int numara;
    char ad[50];
    int notlar[3];
};

void set(struct ogrenci *dizi, int size);
void print(struct ogrenci *dizi, int size);

int main()
{
	struct ogrenci ogrenciler[2];
	set(ogrenciler,2);
	print(ogrenciler,2);
    return 0;
}

void set(struct ogrenci *dizi, int size) {
	int i;
	for(i=0;i<size;i++) {
		printf("%d. Ogrenci Icin: \n\n",i+1);
		printf("Numara: "); scanf("%d",&dizi[i].numara);
		printf("Ad: "); scanf("%s",&dizi[i].ad);
		int j;
		for(j=0;j<3;j++) {
			printf("%d. Not: ",j+1);
			scanf("%d",&dizi[i].notlar[j]);
		}
		printf("\n\n");
	}
}

void print(struct ogrenci *dizi, int size) {
	int i;
	for(i=0;i<size;i++) {
		printf("%d. Ogrenci Icin: \n\n",i+1);
		printf("Numara: %d\n",dizi[i].numara);
		printf("Ad: %s\n",dizi[i].ad);
		int j;
		for(j=0;j<3;j++)
			printf("%d. Not: %d\n",j+1,dizi[i].notlar[j]);
		printf("\n\n");
	}
}

// Alperen Cubuk
