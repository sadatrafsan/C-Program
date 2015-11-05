#include <stdio.h>

int main(){

	int *p,i,A[5];
	
	p = A;
	
	printf("Enter numbers:");
	
	for(i=0; i<5; i++){
	
		scanf("%d",p);
		
		p++;
	}
	
	p--;
	
	for(i= 0; i<5; i++, p--){
	
		printf("%d",*p);
		
		if(i != 4){
		
			printf(", ");
		}
	}
	
	printf("\n");

	return 0;

	}
