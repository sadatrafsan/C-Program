#include <stdio.h>

int main(){

	char content;
	
	FILE *e, *f;
	
	e = fopen("INPUT","w");
	
	printf("Enter some characters and then press CTRL + D to execute:");
	
	while((content = getchar()) != EOF){
	
		putc(content,e);
	}
	
	fclose(e);
	
	e = fopen("INPUT","r");
	f = fopen("COPY","w");
	
	while((content = getc(e)) != EOF){
	
		putc(content,f);
	}
	
	fclose(e);
	fclose(f);
	
	printf("COPYING COMPLETE\n\n");
	
	f = fopen("COPY","r");
	e = fopen("INPUT","a");
	
	
	while((content = getc(f)) != EOF){
	
		putc(content,e);
	}
	
	fclose(e);
	fclose(f);
	
	printf("APPEDING COMPLETE\n\n");

	return 0;

	}
