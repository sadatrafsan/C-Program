#include <stdio.h>

int main() {

	int number,positive,negative;

	positive=0;
	negative=0;

	printf("Enter a set of numbers (Press 777 to exit):");
	
	do{
		scanf("%d", &number);
		if(number<0){
			negative++;
	}
	else {
		positive++;
		}

	}while(number!=777);

	printf("Positive numbers: %d \n Negative numbers: %d \n", positive, negative);

	return 0;

}
