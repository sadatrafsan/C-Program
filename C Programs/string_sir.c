#include <stdio.h>

int main(){

      int i;
      char str[30];

      printf("Enter a string:");

	  for(i=0; i<30; i++){

		scanf("%c", &str[i]);

		if(str[i] != '\n'){

		if((str[i] >= 'a') && (str[i] <='z')){

		      str[i] -= 32;

		      }

		}
		 else{
		      break;

		 }

	  }

	  str[i] = '\0';

      printf("The result is %s \n", str);

      return 0;

}