#include <stdio.h>

int main() {
	int a=3;
	int b=5;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	/*
	int temp=a;
	a=b;
	b=temp;
	*/
	
	printf("a: %d\nb: %d ", a,b);
}

// Alperen Cubuk
