#include <stdio.h>

int main(){

	int i,factorial;

	factorial = 1;

	for(i=5; i>0; i--){

		factorial = factorial * i;
	}

	printf("ANSWER: %d \n",factorial);

	return 0;
}


