#include <stdio.h>

int main() {
	int i,j,num,sum,result;
	for(i=2;i<1000000;i++) {
		num=i;
		sum=0;
		while(num) {
			sum+=num%10;
			num/=10;
		} // sayinin basamaklarini toplamini hesaplayip sum degiskeninde tut
		result=sum; 
		for(j=1;result<=i;j++) { // hesaplanan deger bizim sayimizi gecmedigi sürece dongude kal, j us degerini tutar
			if(sum==1) // sayi 10 100 gibi bir seyse her ussu 1 olacagindan sonsuz donguyu engellemek icin
				break;
			if(result==i) { // sayi kurallara uygun ve ekrana yazilacaksa
				printf("(%d) = ",i);
				printf("(");
				num=i;
				while(num) {
					printf("%d",num%10);
					if(num>9) // son basamak harici aralarina + koymak icin
						printf("+");
					num/=10;
				}
				printf(")^%d\n",j);
				break;
			}
			else {
				result*=sum; // sayinin us degerini 1 artir
			}
		}
	}
	return 0;
}

// Alperen Cubuk
