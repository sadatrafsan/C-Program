#include <stdio.h>

int factorial(int n);

int main(){

	int result;

	result = factorial(5);

	printf("ANSWER: %d \n",result);

	return 0;
}

int factorial(int n){

	int i,fact;

	fact = 1;

	for(i=5; i>0; i--){

		fact = fact * i;
	}

	return fact;
}

