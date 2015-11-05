/**************************************
 * A program to implement array where *
 * 10 roll numbers are read from user *
 * & printed as output using runtime  * 
 * initialization of arry.            *
 * Programmer: ROCKER                 *
 * Date: Sunday, 12 June 2011         *
 **************************************/


#include <stdio.h>

int main(){

	int i,STUDENT[10];

	printf("Enter the roll numbers one after one & press Enter:\n");

	for(i=0; i<10; i++){
	
		scanf("%d", &STUDENT[i]);
	}

	printf("ROLLS ARE:\n");
	
	for(i=0; i<10; i++){
		
		printf("\t %d", STUDENT[i]);
		printf("\n");
	}

	printf("\t\t BYE-BYE\n");	

	return 0;

}
