/*data reading from the user*/

#include <stdio.h>

int main() {

	float fahrenheit, celsius;
	
	printf("Enter The Value In C:");

	scanf("%f", &celsius);
	
	fahrenheit = ((9*celsius)/5)+32;

	printf("Temperature Conversion: %f DC = %f DF\n", celsius, fahrenheit);

	return 0;
}
	
