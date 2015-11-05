//ODD EVEN

#include <stdio.h>

int main() {

	int number;

	printf("Enter a number to check whether ODD OR EVEN:");
	scanf("%d", &number);

	if((number % 2)== 0) {
	
		printf("The given number %d is:EVEN.\n", number);

	}
	else {
		printf("The given number %d is:ODD.\n", number);
	}

	return 0;

}
