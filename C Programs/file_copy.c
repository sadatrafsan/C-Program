#include <stdio.h>

int main(){

	FILE *f1,*f2;

	char c;

	printf("Input Data:\n\n");

	f1 = fopen("INPUT","w");

	while((c = getchar()) != EOF){

		putc(c,f1);
	}
	fclose(f1);
	
 	f2 = fopen("OUTPUT","w");
	
	f1 = fopen("INPUT","r");
	while((c = getc(f1)) != EOF){
	
		putc(c,f2);
	}
	while((c = getc(f2)) != EOF){

		printf("Output Data: %c\n\n",c);
	}
	
	fclose(f1);
	fclose(f2);

	return 0;
}
