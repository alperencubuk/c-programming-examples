#include <stdio.h>

int main() {
	char metin[100];
	printf("Metin Girin: ");
	gets(metin);
	int i,boyut=0;
	char ters[100];
	for(i=0;metin[i]!='\0';i++)
		boyut++;
	boyut--;
	i=0;
	while(metin[i]!='\0') {
		ters[i++]=metin[boyut--];
	}
	ters[i]='\0';
	printf("%s",ters);
	/*for(i=0;ters[i]!='\0';i++)
		printf("%c",ters[i]);*/
	return 0;
}

// Alperen Cubuk
