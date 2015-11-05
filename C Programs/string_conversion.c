#include<stdio.h>

int main(){
  
  char str[20];
   int i;
  
  printf("Enter any string:");
  scanf("%s",str);
  
  printf("The string is:%s\n",str);
  
  for(i=0;i<=str[i];i++){
            if(str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
  }
  printf("\nThe string in lowercase is:%s\n",str);
  return 0;
}


