#include <stdio.h>

#define PI 3.1416

void circle();
void triangle();
void square();

int main(){

	int menu = 1,user;

	while(menu){

		printf("\n\t 1.Circle \n");
		printf("\t 2.Triangle \n");
		printf("\t 3.Square \n");
		printf("\t 4.Exit\n");

		printf("Enter Your Choice:");
		scanf("%d",&user);


		switch(user){


			case 1:
				circle();
				break;
		
			case 2:
				triangle();
				break;

			case 3:
				square();
				break;

			case 4:
				printf("\t\t Bye-Bye!\n\n");
				menu = 0;
				break; 

			default:

				printf("Sorry!\n\n");

			}

		
	}


return 0;

}

void circle(){

	float r,a;

	printf("Enter the radius:");
	scanf("%f",&r);

	a = PI * (r * r);

	printf("Area of Circle:%f\n",a);
}

void triangle(){
	
	float b,h,a;

	printf("Enter the value of Base and Height:");
	scanf("%f %f",&b,&h);

	a = (0.5 * (b * h));

	printf("Area of Triangle:%f\n",a);

}

void square(){

	float a,l;

	printf("Enter the valuse of Length:");
	scanf("%f",&l);

	a = l * l;

	printf("Area of Square:%f\n",a);
}





