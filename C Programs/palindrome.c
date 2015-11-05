#include <stdio.h>
#include <string.h>

int main(){

	char A[10],B[10];

	int i,j = 0,l;
	
	printf("Enter A String:");
	gets(A);
	
	l = strlen(A);
	
	for(i=l-1; i>=0; i--){
	
		B[j] = A[i];
		
		j++;	
	}
	
	B[j] = '\0';
	
	if(strcmp(A,B) == 0){
	
		printf("\nEntered string %s is palindrome",A);
	}
	else{
	
		printf("\nEntered string %s is not palindrome",A);
	}

	printf("\n");

	return 0;

	}
