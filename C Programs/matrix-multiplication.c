#include <stdio.h>

#define ROW 3
#define COL 3
#define N 3

int main(){
	
	int i, j, k, A[ROW][N], B[N][COL], C[ROW][COL];
	
	printf("Enter Matrix A (%d X %d) \n", ROW, N);
	for(i=0;i<ROW;i++){
		for(j=0;j<N;j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Enter Matrix B (%d X %d) \n", N, COL);
	for(i=0;i<N;i++){
		for(j=0;j<COL;j++){
			scanf("%d", &B[i][j]);
		}
	}
	
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
	
			C[i][j] = 0;
				
			for(k=0;k<N;k++){
				C[i][j] += A[i][k] * B[k][j] ;
			}
		}
	}
	
	printf("The resultant C Matrix (%d X %d): \n", ROW, COL);
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%5d", C[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
