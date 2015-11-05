#include <stdio.h>


int main(){

	int n,x;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("Reversal of number: ");
	do{
		x = n % 10;
		
		printf("%d",x);
		
		n = n / 10;
		
	}while(n > 0);
	
	printf("\n\n");
	
	return 0;
}

