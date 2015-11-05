#include <stdio.h>

int main(){

	int DATA[20],i, number,k,counter = 0;
	
	printf("Enter a number:");
	scanf("%d",&number);
	
	while(number != 0){
	
		k = number % 2;
		
		if(k != 0){
		
			DATA[counter] = 1;
		}
		else{
		
			DATA[counter] = 0;
			
		}
		
		number = number / 2;
	
		counter++;
	}
	
	for(i=counter-1; i>=0; i--, counter--){
	
		printf("%d",DATA[i]);

	}
	
	printf("\n\n");	

	return 0;
	
	}
