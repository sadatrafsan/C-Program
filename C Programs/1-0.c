#include <stdio.h>

int main(){

	int i,j, A[5][5];
	
	for(i=0; i<5; i++){
	
		for(j=0; j<5; j++){
		
			if(i == j){
			
				A[i][j] = 1;
				
			}
			else{
			
				A[i][j] = 0;
				
			}
			
			printf("%d",A[i][j]);
			
		}
		
		printf("\n");
	}

	return 0;
	
}
