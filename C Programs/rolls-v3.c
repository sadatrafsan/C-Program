#include <stdio.h>

int main(){

	int i,sum,DATA[10];

	printf("Enter 10 integer values:");

	for(i=0;i<10;i++){
		
		scanf("%d", &DATA[i]);
	}

	sum = 0;

	for(i=0;i<10;i++){

		sum = sum + DATA[i];
	}

	printf("Answer: %d \n",sum);

	return 0;
}
