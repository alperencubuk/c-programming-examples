#include <stdio.h>

int main() {
	char dizi1[]="zeynep";
	char dizi2[]="ilayda";
	char dizi3[15];
	
	int i,j,k;
	
	for(i=0;dizi1[i]!='\0';i++) {
		dizi3[i]=dizi1[i];
	}
	//dizi3[i++]=' '; //arada bir bosluk istenirse
	for(j=i;dizi2[j-i]!='\0';j++) {
		dizi3[j]=dizi2[j-i];
	}
	dizi3[j]='\0';
	for(k=0;dizi3[k]!='\0';k++) {
		printf("%c",dizi3[k]);
	}
	return 0;
}

// Alperen Cubuk
