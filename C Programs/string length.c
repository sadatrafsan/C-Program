#include <stdio.h>

int main(){

	char A[10],B[10];
	
	int i,counter = 0;
	
	printf("Enter a string:");
	scanf("%s",A);
	

	
	for(i=0; i<10; i++){
	
		if(A[i] != '\0'){
		
			B[i] = A[i];
			
			counter++;
		}
		else{
		
			break;
		}	
		
		
	}
	
	printf("Entered string length is %d\n",counter);

	return 0;

	}
