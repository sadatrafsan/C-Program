#include <stdio.h>

int main(){
	
	float number,k;
	
	int new;
		
	printf("Enter a floating-point number : ");
	scanf("%f", &number);
	
	new = (int) number;
	
	k = number - new;
	
	printf("%d\n\n",new);
	printf("%f\n\n",k);
		
	return 0;
}
