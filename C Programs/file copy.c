#include <stdio.h>

int main(){

	char content;
	
	FILE *f, *g;
	
	f = fopen("INPUT","w");
	
	printf("Enter some characters and then press CTRL + D to execute:");
	
	while((content = getchar()) != EOF){
	
		putc(content,f);
	}
	
	fclose(f);
	
	
	
	f = fopen("INPUT","r");
	g = fopen("COPY","w");
	
	while((content = getc(f)) != EOF){
	
		putc(content,g);
	}
	
	fclose(f);
	fclose(g);
	
	printf("COPYING COMPLETE\n\n");

	return 0;

	}
