#include <stdio.h>

#define MAX 100

struct vectorTag{

	int value;
};

void createVector(struct vectorTag vector[],int number);

void modifyVector(struct vectorTag vector[],int number);

void displayVector(struct vectorTag vector[],int number);

void multiplyVector(struct vectorTag vector[],int number);

void addTwoVectors();

int main(){

	int number;
	struct vectorTag vector[MAX];

	printf("How Many Elements:");
	scanf("%d", &number);

	createVector(vector,number);	

	displayVector(vector,number);

	modifyVector(vector,number);
	displayVector(vector,number);

	multiplyVector(vector,number);
	displayVector(vector,number);
	
	printf("Enter Two Vectors to Add: \n");
	addTwoVectors();

	return 0;
}

void createVector(struct vectorTag vector[],int number){

	int i;

	printf("Enter %d elements:", number);

		for(i=0; i<number; i++){

			scanf("%d", &vector[i].value);

		}

}

void modifyVector(struct vectorTag vector[],int number){

	int location,value;

	printf("Enter the location:");
	scanf("%d", &location);

	printf("Enter the modify value:");
	scanf("%d", &value);

	vector[location - 1].value = value;

}

void displayVector(struct vectorTag vector[],int number){

	int i;

	printf("The vector in vector form:(");

		for(i=0; i<number; i++){

			if(i == 0){

				printf("%d",vector[i].value);
			
				}
				else{
		
				printf(",%d",vector[i].value);
				
			}

		}

	printf(")\n");
}

void multiplyVector(struct vectorTag vector[],int number){

	int i,scalar;

	printf("Enter a scalar value:");
	scanf("%d", &scalar);

	for(i=0; i<number; i++){

			vector[i].value *= scalar;

		}

}

void addTwoVectors(){

	int i,number;
	struct vectorTag vectorA[MAX],vectorB[MAX],vectorC[MAX];

	printf("How many elements:");
        scanf("%d",&number);

	printf("Enter vector A:");
	createVector(vectorA,number);

	printf("Enter vector B:");
	createVector(vectorB,number);

	
	    for(i=0; i<number; i++){

		vectorC[i].value = vectorA[i].value + vectorB[i].value;

	    }

	printf("Vector A:");
	displayVector(vectorA, number);

	printf("Vector B:");
	displayVector(vectorB, number);

	printf("Sum of Vector A & B is:\n\n");
	displayVector(vectorC, number);
	
}


