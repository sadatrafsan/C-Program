#include <stdio.h>

#define N 10

int main(){

      int i,j,A[N][N];
 
      for(i=0; i<N; i++){
	for(j=0; j<N; j++){
	    if((j == 0) || (i == j)){
		A[i][j] = 1;
		}
		else{
		     A[i][j] = A[i-1][j-1]+A[i-1][j];
		    }
		}

	  }


printf("%d rows: \n", N);

for(i=0; i<N; i++){
	for(j=0; j<=i; j++){

	    printf("%5d", A[i][j]);
	  }
	  printf("\n\n");
	  }

	  return 0;

}