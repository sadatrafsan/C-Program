#include <stdio.h>

int main(){

	char first[100],middle[100],last[100],name[100];
	
	int i,counter = 0;
	
	printf("Enter the 1st string:");
	gets(first);
	
	printf("Enter the 2nd string:");
	gets(middle);
	
	printf("Enter the 3rd string:");
	gets(last);
	
	for(i=0; i<100; i++){
	
		if(first[i] != '\0'){
	
			name[counter] = first[i];
			
			counter++;
		}
		else{
		
		
			break;
		}
		
	}
	
	
	for(i=0; i<100; i++){
	
		if(middle[i] != '\0'){
	
			name[counter] = middle[i];
			
			counter++;
		}
		else{
		
			break;
		}
		
	}
	
	
	for(i=0; i<100; i++){
	
		if(last[i] != '\0'){
	
			name[counter] = last[i];
			
			counter++;
		}
		else{
		
			break;
		}
		
	}
	
	name[counter] = '\0';
	
	printf("%s\n\n",name);
	
	return 0;
	
	}
