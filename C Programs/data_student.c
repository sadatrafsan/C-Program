#include <stdio.h>

struct student{

	int roll;
	char name[10];
	int days;
	};

int main(){
	struct student database[3],*p;

	int fine;

	printf("Please Input data \n");

	for (p=database; p<database+3;p++){

		scanf("%d %s %d", & p->roll,& p-> name, &p->days);
	}

	printf("Output\n\n");
	printf("Roll Name Absent Fines\n\n");
	for(p=database; p<database +3; p++){

		fine = 2*(p->days);
		printf("%d %s %d %d\n\n", p-> roll, p-> name, p->days , fine);
	}
	return 0;
}
