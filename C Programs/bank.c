#include <stdio.h>
#include <string.h>

struct bank{

	char name[20];
	int accountNumber;
	char accountType[20];
	float balance;
};

void initial(struct bank member);
void deposit(struct bank member);
void withdraw(struct bank member);
void display(struct bank member);


int main(){

	struct bank member;

	initial(member);
	
	
	
	
	return 0;
}


void initial(struct bank member){

	
	printf("Enter the Details :Name,Account Number,Account Type,Balance\n");
	scanf("%s %d %s %f",&member.name,&member.accountNumber,&member.accountType,&member.balance);


	deposit(member);	

	}

void deposit(struct bank member){

	float money;

	printf("Deposit The Amount:\n");
	scanf("%f",&money);

	member.balance += money;

	withdraw(member);

	}

void withdraw(struct bank member){

	float result,withdraw;
	
	printf("\tName: %s\n\t Account Number: %d\n\tAccount Type: %s\n\tPresent Balance: %f\n",member.name,member.accountNumber,member.accountType,member.balance);

	printf("How much money you want to withdraw?");
	scanf("%f",&withdraw);

	result = member.balance - withdraw;

		if(result > 500.0){

			member.balance = result;
	 
			printf("Balance Available!");
		}
		else{

			printf("SORRY! Insufficient Balance");

		}

	display(member);	
	
	}

void display(struct bank member){

	printf("\t\n Name: %s \n \t Current Balance: %f\n",member.name,member.balance);

	}

	
