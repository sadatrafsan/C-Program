#include <stdio.h>

int main(){

	int DATA[20],BINARY[20],i,n,k,counter = 0, binary = 0;

	float number,y;
	
	printf("Enter a number:");
	scanf("%f",&number);

	n = (int)number;

	y = number - n;
	
	while(n != 0){
	
		k = n % 2;

		if(k != 0){
		
			DATA[counter] = 1;
		}
		else{
		
			DATA[counter] = 0;
			
		}
		
		n = n / 2;
	
		counter++;
	}

	while(y != 0){
	
		y = 2 * y;

		if(y > 1){

			BINARY[binary] = (int) y;

			n = (int) y;

			y = y - n;
		}
		else{

			BINARY[binary] = (int) y; 
		}

		binary++;

	}


	
	for(i=counter-1; i>=0; i--, counter--){
	
		printf("%d",DATA[i]);

		if(i == 0){
			
			printf(".");
		}
	}
	
	for(i=0; i<20; i++){
	
		printf("%d",BINARY[i]);

	}


	
	printf("\n\n");	

	return 0;
	
	}
