#include <stdio.h>

int factorial(int n);

int main(){

	int result;

	result = factorial(5);

	printf("ANSWER: %d \n",result);

	return 0;
}

int factorial(int n){

	int fact;

	if(n == 1){

		return 1;
	}
	else{

		fact = n * factorial(n-1);
	}

	return fact;
}


