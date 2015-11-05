#include <stdio.h>

int factorial(int);

int power(int,int);

int main(){

	int x, n,sum, flag = 0, f, p, i;
	
	float result;
	
	sum = x;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(i=2; i<=n; i++){
	
		p = power(x,i);
	
		f = factorial(i);
		
		result = (f/p);
		
		if(flag == 0){
			
			sum += result;
		}
		else{
		
			sum -= result;
		}
	}
	
	
	printf("Sum = %d\n",sum);

	return 0;

	}


int factorial(int b){

	int i, sum = 1;
	
	for(i=b; i>=1; i--){
	
		sum = sum * i;
	}


	return sum;
}

int power(int x,int n){

	int i, y = 1;

	for(i=1; i<=n; i++){
	
		y = y * x;
	}

	return y;
	
}
