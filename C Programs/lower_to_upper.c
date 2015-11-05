#include <stdio.h>

char string(char A[]);

int main(){

    char str[6];
    int i;

    printf("Enter a string:");

	for(i=0; i<6; i++){ 

	    scanf("%c", &str[i]);
	}
	
    string(str);

    return 0;
}

char string(char A[]){

 int i;
  
    for(i=0; i<6; i++){
      
	if(A[i] >= 'a' && A[i] <= 'z'){
	  
	    A[i] -= 32;
	}
    }
    
    printf("Answer: %s \n", A);
    
} 
      
    