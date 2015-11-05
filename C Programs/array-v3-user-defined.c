#include <stdio.h>

#define N 10

int generateSum(int A[]);

int main(){

	int i,sum,roll[N];

	printf("Enter 10 Rolls:");

	for(i=0; i<N; i++){

		scanf("%d", &roll[i]);
	}

	sum = generateSum(roll);

	printf("ANSWER: %d \n",sum);

	return 0;
}

int generateSum(int A[]){

	int i,sum;

	sum = 0;

	for(i=0; i<N; i++){

		sum += A[i];
	}

	return sum;
}


