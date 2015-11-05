#include <stdio.h>

int fibonacci(int n);

int main(){

      int i,n;

      printf("Enter the N:");
      scanf("%d", &n);

      printf("Series:\n");

	for(i=0; i<n; i++){

	  printf("%5d",fibonacci(i));
	
	}

	return 0;
}

int fibonacci(int n){

  if(n<=1){

      return n;
  }
  else{
    
      return fibonacci(n-1) + fibonacci(n-2);

  }
}