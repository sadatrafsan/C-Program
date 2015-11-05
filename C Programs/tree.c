#include <stdio.h>

int main(){

	float feet,width,height,temp2,result;

	int temp1,wide1,wide2;

	printf("\t\t Welcome! \n\n");


		printf("Enter The Width Of The Tree:");
		scanf("%f",&feet);

		printf("Enter The Height Of The Tree:");
		scanf("%f",&height);

		temp1 = (int) feet;

		wide1 = (temp1 * 12);

		temp2 = (feet - temp1);

		wide2 = (temp2 * 100);

		width = (wide1 + wide2);

		result = (width * width * height) / 2304;


	printf("The Width Of The Tree Is: %f\n\n",result); 

	return 0;

}
