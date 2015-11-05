#include <stdio.h>

int main(){

	int *p,i,n,A[100];
	
	p = A;

	printf("Enter the amount of numbers:");
	scanf("%d",&n);

	for(i=0; i<n; i++, p++){

		printf("Enter the no.%d number:",i+1);
		scanf("%d",p);
	}
	
	p--;
	
	for(i= 0; i<n; i++, p--){
	
		printf("%d",*p);
		
		if(i != 4){
		
			printf(", ");
		}
	}
	
	printf("\n");

	return 0;

	}
