#include <stdio.h>

int main(){

	int *p, i, sum = 0, A[100];
	
	p = A;
	
	printf("Enter values, Press -1 to stop:");
	
	for(i=0; i<5; i++, p++){
	
		scanf("%d",p);

		if(*p == -1){

			break;
		}
		else{
		
			sum += *p;
		}  
	}
	
	printf("Sum = %d\n\n",sum);
	
	return 0;

	}
