//if---else implement


#include <stdio.h>

int main() {

	float fahrenheit, celsius;

	int choise;

	printf("Welcome to our Temperature Conversion System\n");
	printf("\t 1.Celsius to Fahrenheit\n");
	printf("\t 2.Fahrenheit to Celsius\n");

	printf("Please Choose The Option:");

	scanf("%d", &choise);
	
	if (choise == 1) {
	
	printf("Enter The Value In Celsius:");

	scanf("%f", &celsius);
	
	fahrenheit = ((9*celsius)/5)+32;

	printf("The Temperature is: %f DC = %f DF\n", celsius, fahrenheit);

	}

	else {

	printf("Enter The Value In Fahrenheit:");

	scanf("%f", &fahrenheit);
	
	celsius = ((fahrenheit-32)*5)/9;

	printf("The Temperature is: %f DF = %f DC\n", fahrenheit, celsius);

	}

	printf("Thank You For Using our Program\n");

	printf("---Bye Bye---\n");	

	return 0;
}
	
