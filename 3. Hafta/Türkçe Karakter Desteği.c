#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Turkish");
	printf("ð ü þ ý ö ç");
	
	return 0;
}

// Alperen Cubuk
