#include <stdio.h>

int main() {
	char id[]="admin";
	char password[]="password";
	char k_adi[100];
	char sifre[100];
	
	printf("Kullanici Adi: ");
	scanf("%s",k_adi);
	printf("Sifre: ");
	scanf("%s",sifre);
	
	int i, kontrol1=1, kontrol2=1;
	
	for(i=0;id[i]!='\0';i++) {
		if (k_adi[i]!=id[i]) {
			kontrol1=0;
			break;
		}
	}
	if(k_adi[i]!='\0')
		kontrol1=0;
	
	for(i=0;password[i]!='\0';i++) {
		if (sifre[i]!=password[i]) {
			kontrol2=0;
			break;
		}
	}
	if(sifre[i]!='\0')
		kontrol1=0;
	
	if(kontrol1 && kontrol2) {
		printf("Girisiniz Onaylandi.");
	}
	else {
		printf("Giris Basarisiz.");
	}
	return 0;
}

// Alperen Cubuk
