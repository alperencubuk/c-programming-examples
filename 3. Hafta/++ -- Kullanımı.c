#include <stdio.h>

int main() {
	
	int a=3; 
	int b=5;
	int c,d;
	
	c = (--a) + (b++);
	d = c--;
	
	printf("%d", c*d);
	
	return 0;
}
