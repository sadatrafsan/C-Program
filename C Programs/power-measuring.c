#include <stdio.h>

int getPower(int x, int n);

int main(){

	int x,y,n;

	printf("Enter the value of X:");
	scanf("%d", &x);

	printf("Enter the value of n:");
	scanf("%d", &n);

	y = getPower(x,n);

	printf("Answer: %d\n",y);

	return 0;
	
	}

	int getPower(int x, int n){

		int i,result;
	
		result = 1;

		for(i=0; i<n; i++){

			result = result * x;	
			}

		return result;

		}


