#include <stdio.h>
#define N 5

void function1();
int function2();
void function3(int limit);
int function4(int number);
void function5(float array[], int n);
float function6(float array[], int n);

int main() {
	int limit, num, reversed;
	float my_arr[N];
	// Show options to user
	function1();
	printf("Please select one of the options above: ");
	// Get selection from user
	switch (function2()) {
		case 1:
			printf("Please enter limit for prime numbers: ");
			scanf_s("%d", &limit);
			// Print the prime numbers until the limit
			function3(limit);
			break;
		case 2:
			printf("Please enter an integer number: ");
			scanf_s("%d", &num);
			// Reverse a number and assign it to the variable
			reversed = function4(num);
			printf("Reversed number is: %d", reversed);
			break;
		case 3:
			printf("Please enter %d float numbers: ", N);
			// Take array from user
			function5(my_arr, N);
			// Calculate and show the sum
			printf("Sum of the array %.2f", function6(my_arr, N));
			break;
		default:
			printf("Invalid Option!!");
			break;
	}
	getch();
	return 0;
}

void function1() {
	printf("1 - Prime numbers until a limit\n");
	printf("2 - Reverse an integer\n");
	printf("3 - Sum of 5 float numbers\n");
}

int function2() {
	int selection;
	scanf("%d",&selection);
	return selection;
}

void function3(int limit) {
	if(limit>=2)
		printf("2 ");
	if(limit>=3)
		printf("3 ");
	int i,j,prime;
	for (i=5;i<=limit;i+=2) {
		prime=1;
		for(j=3;j<=i/2;j++) {
			if(i%j==0) {
				prime=0;
				break;
			}
		}
		if(prime) {
			printf("%d ",i);
		}
	}
}

int function4(int number) {
	int reverse=0;
	while(number>0) {
		reverse*=10;
		reverse+=number%10;
		number/=10;
	}
	return reverse;
}

void function5(float array[], int n) {
	int i;
	for(i=0;i<n;i++) {
		scanf("%f",&array[i]);
	}
}

float function6(float array[], int n) {
	int i;
	float sum=0;
	for(i=0;i<n;i++) {
		sum += array[i];
	}
	return sum;
}

// Alperen Cubuk
