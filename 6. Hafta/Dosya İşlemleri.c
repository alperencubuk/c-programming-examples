#include <stdio.h>
#define ERROR 1

int main() {
	FILE *input=fopen("input.txt","r");
	if(input==NULL) return ERROR;
	FILE *output=fopen("output.txt","w");
	if(output==NULL) return ERROR;
	
	char c;
	int n=0;
	
	while ((fscanf(input,"%c",&c))!=EOF)
		fprintf(output,"%c",c);
	
	fclose(input);
	fclose(output);
	
	printf("OK");
	return 0;
}

// Alperen Cubuk
