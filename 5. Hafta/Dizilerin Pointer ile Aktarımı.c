#include <stdio.h>

void setArray(int *array, int size);
void printArray(int *array, int size);

int main() {
	int dizi[10];
	setArray(dizi,10);
	printArray(dizi,10);
	return 0;
}

void setArray(int *array, int size) {
	int i;
	for(i=0;i<size;i++) {
		*(array+i)=i;
		//array[i]=i;
	}
}

void printArray(int *array, int size) {
	int i;
	for(i=0;i<size;i++) {
		printf("%d ",*(array+i));
		//printf("%d ",array[i]);
	}
}

// Alperen Cubuk
