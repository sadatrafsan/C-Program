#include <stdio.h>

int main(){
	
	int x, y, z, temp;
	
	printf("Enter the value of X : ");
	scanf("%d", &x);
	
	printf("Enter the value of Y : ");
	scanf("%d", &y);
	
	printf("Enter the value of Z : ");
	scanf("%d", &z);
	
	temp = x;
	x = y;
	y = z;
	z = temp;	
	
	printf("After rotation: X = %d, Y = %d and Z = %d \n", x, y, z);
		
	return 0;
}
