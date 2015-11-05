//addition of floating point numbers

#include <stdio.h>

int main(){
	
	float number;
	int i,newNumber,digitsToDisplay[2];
	
	printf("Enter a floating-point number : ");
	scanf("%f", &number);
	
	newNumber = (int) number;
	
	for(i=0; i<2; i++) {
		digitsToDisplay[i] = newNumber % 10;		
		newNumber = (int) (newNumber / 10);
	}
	
	printf("The desired digits are : ");
	for(i=1;i>=0;i--){
		printf("%d ", digitsToDisplay[i]);
	}
	printf("\n");
		
	return 0;
}
