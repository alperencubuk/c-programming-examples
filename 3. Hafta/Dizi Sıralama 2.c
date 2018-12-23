#include <stdio.h>
#define N 9

int main() {
	int dizi[N]={1,8,4,5,9,3,7,2,6};
	int i,j,temp; 
	for(i=0;i<N;i++) {
		for(j=0;j<N-1;j++) {
			if(dizi[j]>dizi[j+1]) {
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
		printf("%d  ", dizi[i]);
	return 0;
}

// Alperen Cubuk
