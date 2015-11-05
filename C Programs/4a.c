//1+2+3+------+n series calculator

#include <stdio.h>

int main() {

	int i,number,sum;

	sum = 0;

	printf("Enter the value of N:");
	scanf("%d", &number);

	for(i=1; i<=number; i++) {
	
	sum = sum + i;

	}


	printf("\nSum of the given series is: %d\n", sum);

	return 0;

}
