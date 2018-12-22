#include <stdio.h>

void change(int *a, int *b);

int main() {
	int a=5, b=3;
	change(&a,&b);
	printf("a: %d b: %d",a,b);
	return 0;
}

void change(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

// Alperen Cubuk
