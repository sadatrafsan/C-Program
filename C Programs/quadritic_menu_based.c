#include <stdio.h>
#include <math.h>

int main(){

      float a,b,c,d,x1,x2;
      
      int menu;
      
      menu = 1;
      
      printf("\t\t WELCOME TO OUR QUADRITIC EQUATION SOLVER\n\n");
      
      while(menu){
      
      printf("Enter the value of a:");
      scanf("%f", &a);

      printf("Enter the value of b:");
      scanf("%f", &b);
      
      printf("Enter the value of c:");
      scanf("%f", &c);
      
      d = ((b*b) - (4*a*c));
      
      if(a == 0 && b == 0){
	
	printf("No Solution\n\n");
	
      }
      else if(a == 0){
	
	x1 = -(c/b);
	
	printf("Answer: %f\n", x1);
	
	
      }
      else if(d<0){
	
	d = -d;
	
	x1 = (-b)/(2*a);
	x2 = sqrt(d)/(2*a);
	
	printf("\t Answer is:x1 = %f + %fi \n",x1,x2);
	printf("\t Answer is:x2 = %f + %fi \n",x1,x2);
	
	
      }
      else {
	
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	
	printf("x1 = %f \n",x1);
	printf("x2 = %f \n",x2);
      }
      
      printf("Do You Like To Go Ahead? \n");
      printf("\t 1.YES\n");
      printf("\t 2.NO\n");
      
      scanf("%d", &menu);
      
      if(menu == 2){
	
	printf("\t\t BYE-BYE\n");
	
	menu = 0;
      }
      
      }

return 0;
}