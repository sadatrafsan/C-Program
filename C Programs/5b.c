//printing odd numbers from 1 to 100

#include <stdio.h>

int main() {

	int i,sum;

	sum = 0;

	i=1;

	while(i<100){
	
		sum = sum + i;
		
		i=i+2;

	printf("\n %d ", i); 

	}

	return 0;

}
