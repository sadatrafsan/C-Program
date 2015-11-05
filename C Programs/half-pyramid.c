//

#include <stdio.h>

int main(){
	
	int i, number, counter, data[10];
	
	printf("Enter an integer number : ");
	scanf("%d", &number);
	
	counter = 0;
	
	while(number != 0)
	{		
		data[counter] = number % 10;
		number = number / 10;
		
		counter++;
	}
	
	while(counter != 0)
	{		
		for(i=counter-1; i>=0; i--)
		{		
			printf("%d ", data[i]);
		}
		
		counter--;
		
		printf("\n");
	}
	
	return 0;
}
