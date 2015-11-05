/*Implementation of enum and loop*/

#include <stdio.h>

enum choise {CTOF = 1, FTOC, EXIT};

int main() {

	float fahrenheit, celsius;

	int userChoise, flag;

	flag = 1;

	while(flag) {

	printf("Welcome to our Temperature Conversion System\n");
	printf("\t 1.Celsius to Fahrenheit\n");
	printf("\t 2.Fahrenheit to Celsius\n");
	printf("\t 3.Exit\n");

	printf("Enter your choice:");
	scanf("%d", &userChoise);
	
	switch(userChoise) {

		case CTOF:
	
			printf("Enter The Value In Celsius:");

			scanf("%f", &celsius);
	
			fahrenheit = ((9*celsius)/5)+32;

			printf("Result is: %f DC = %f DF\n\n", celsius, fahrenheit);

			break;

		case FTOC:

			printf("Enter The Value In Fahrenheit:");

			scanf("%f", &fahrenheit);
	
			celsius = ((fahrenheit-32)*5)/9;

			printf("Result is: %f DF = %f DC\n", fahrenheit, celsius);

			break;

		case EXIT:

			printf("Thank You For Using our conversion system\n");

			flag = 0;

			break;

		default:

			printf("ERROR! Select a valid option\n");
		
			}

		}

	return 0;

	}
