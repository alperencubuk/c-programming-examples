#include <stdio.h>

int main() {
	char metin[100];
	printf("Metin Girin: ");
	gets(metin);
	int i;
	char ters[100];
	for(i=0;metin[i]!='\0';i++) {
		if(metin[i]>=65 && metin[i]<=90)
			ters[i]=metin[i]+32;
		else if(metin[i]>=97 && metin[i]<=122)
			ters[i]=metin[i]-32;
		else
			ters[i]=metin[i];
	}
	ters[i]='\0';
	printf("%s",ters);
	/*for(i=0;ters[i]!='\0';i++)
		printf("%c",ters[i]);*/
	return 0;
}

// Alperen Cubuk
