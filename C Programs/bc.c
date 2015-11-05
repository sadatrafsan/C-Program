/*Basic Calculator*/

#include <stdio.h>

enum choices {ADD = 1, SUBTRACT, MULTIPLY, DIVISION, EXIT};

int main() {

	float firstOperand, secondOperand, result;

	int userChoice, flag;

	flag = 1;

	while(flag) {

	printf("Welcome to our Basic Calculator\n");
	printf("\t 1.ADD\n");
	printf("\t 2.SUBTRACT\n");
	printf("\t 3.MULTIPLY\n");
	printf("\t 4.DIVISION\n");
	printf("\t 5.EXIT\n");

	printf("Enter your choice:");
	scanf("%d", &userChoice);
	
	switch(userChoice) {

		case ADD:
	
			printf("Enter The First Operand A:");
			scanf("%f", &firstOperand);

			printf("Enter The Second Operand B:");
			scanf("%f", &secondOperand);
	
			result = firstOperand + secondOperand;

			printf("The Addition of (%.0f + %.0f) is %.0f\n\n", firstOperand, secondOperand, result);

			break;

		case SUBTRACT:

			printf("Enter The First Operand A:");
			scanf("%f", &firstOperand);

			printf("Enter The Second Operand B:");
			scanf("%f", &secondOperand);
	
			result = firstOperand - secondOperand;

			printf("The Subtraction of (%.0f - %.0f) is %.0f\n\n", firstOperand, secondOperand, result);

			break;
			
		case MULTIPLY:		

			printf("Enter The First Operand A:");
			scanf("%f", &firstOperand);

			printf("Enter The Second Operand B:");
			scanf("%f", &secondOperand);
	
			result = firstOperand * secondOperand;

			printf("The Multiplication of (%.0f * %.0f) is %.0f\n\n", firstOperand, secondOperand, result);

			break;

		case DIVISION:		

			printf("Enter The First Operand A:");
			scanf("%f", &firstOperand);

			printf("Enter The Second Operand B:");
			scanf("%f", &secondOperand);
	
			result = firstOperand / secondOperand;

			printf("The Division of (%.0f / %.0f) is %.0f\n\n", firstOperand, secondOperand, result);

			break;

		case EXIT:

			printf("Thank You For Using our Calculator\n");

			flag = 0;

			break;

		default:

			printf("ERROR! Select a valid option\n");
		
			}

		}

	return 0;

	}
