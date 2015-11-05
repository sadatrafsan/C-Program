#include <stdio.h>

void showResult(int A[]);

int main()
{
	int vote, flag;
	int candidate[6] = {0,0,0,0,0,0};
	
	flag = 1;
	
	do {
		printf("Welcome to our voiting system! \n\n");
		printf("Press 1 for First Candidate \n");
		printf("Press 2 for Second Candidate \n");
		printf("Press 3 for Third Candidate \n");
		printf("Press 4 for Forth Candidate \n");
		printf("Press 5 for Fifth Candidate \n\n");
		printf("Press 777 to Exit \n");
		
		printf("Enter cast your vote: ");
		scanf("%d", &vote);
		
		switch(vote) {
			case 1:
				candidate[1]++;
				break;
			case 2:
				candidate[2]++;
				break;
			case 3:
				candidate[3]++;
				break;
			case 4:
				candidate[4]++;
				break;
			case 5:
				candidate[5]++;
				break;
			case 777:
				showResult(candidate);
				flag = 0;
				break;
			default:
				candidate[0]++;
		}
		
	} while(flag);
		
	return 0;
}

void showResult(int A[])
{
	printf("Voting Result : \n\n");
	printf("First Candidate : %d \n", A[1]);
	printf("Second Candidate : %d \n", A[2]);
	printf("Third Candidate : %d \n", A[3]);
	printf("Forth Candidate : %d \n", A[4]);
	printf("Fifth Candidate : %d \n", A[5]);
	printf("Spoiled votes : %d \n", A[0]);
}
