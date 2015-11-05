#include <stdio.h>

int main() {

	float sum = 0,i,number;

	printf("Enter the value of N:");
	scanf("%f", &number);

	for(i=1; i<=number; i++) {
	
	sum = sum + (1/i);

	}


	printf("\n Sum of the given series is: %f\n", sum);

	return 0;

}
