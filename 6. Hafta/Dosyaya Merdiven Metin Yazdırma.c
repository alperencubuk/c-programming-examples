#include <stdio.h>
#include <string.h>

void dosyayaYaz(char*);

int main() {
	char *metin="muvaffakiyetsizlestiricilestiriveremeyebileceklerimizdenmissinizcesine";
	dosyayaYaz(metin);
	return 0;
}

void dosyayaYaz(char *array) {
	FILE *ptr = fopen("file.txt","w+");
	int i,j;
	for(i=0;i<strlen(array);i++) {
		for(j=0;j<=i;j++) {
			fprintf(ptr,"%c",*(array+j));
		}
		fprintf(ptr,"\n");
	}
}

// Alperen Cubuk
