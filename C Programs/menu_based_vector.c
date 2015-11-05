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
  
	int choice,userChoice,menu,number;
	struct vectorTag vector[MAX];
	char c;
	
	menu = 1;
	
	
	printf("\t\t Welcome To Our Vector System \n\n");
	
	printf("\t\t Enter The Element Numbers:");
	scanf("%d", &number);
		

	createVector(vector,number);	
	displayVector(vector,number);
	
	printf("Do You Want To Go Further? \n");
	printf("\t 1.YES\n");
	printf("\t 2.NO\n");
	scanf("%d", &choice);
	
	if(choice == 2){
	  
	  printf("\t\t THANK YOU\n");
	  
	  menu = 0;
	  
	}
	
	    while(menu == 1){
	      
	      
		  printf("\t ====MENU====\n");  
				    
		  printf("\t 1.Modify The Vector Values \n");
		  printf("\t 2.Multiply The Vector With A Scalar\n");
		  printf("\t 3.Add Two Different Same Size Vectors\n");
		  printf("\t 4.Exit \n");
		  
		  printf("Enter Your Choice:");
		  scanf("%d", &userChoice);
		  
	      
	      
			switch(userChoice){
			  
			  
			  case 1:
			    
				modifyVector(vector,number);
				displayVector(vector,number);
	
			    break;
			    
			  
			  case 2: 
			    
				multiplyVector(vector,number);
				displayVector(vector,number);
			    
			    break;
			    
			    
			  case 3:
			    
				printf("\t Enter Two Vectors to add with each other \n");
				addTwoVectors();
				
				break;
			    
			    
			  case 4:
			    
				printf("\t\t THANK YOU\n");
				
				menu = 0; 
			    
			    break;
			    
			    
			  default:
			    
			    printf("WARNING!Please Enter A Valid Option\n");
			    
		     
		 }
		     	      
	      
	    }
 
  return 0;
  
}


void createVector(struct vectorTag vector[],int number){

	int i;

	printf("\t Enter %d elements:", number);

		for(i=0; i<number; i++){

			scanf("%d", &vector[i].value);

		}

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



void modifyVector(struct vectorTag vector[],int number){

	int location,value;

	printf("Enter the location:");
	scanf("%d", &location);

	printf("Enter the modify value:");
	scanf("%d", &value);

	vector[location - 1].value = value;

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