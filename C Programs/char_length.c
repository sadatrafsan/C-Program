#include <stdio.h>

int main(){

    char *name,*cptr;

    int length;

    name = "RAFSANJANI";

    cptr = name;

    printf("%s\n",name);
    
    while(*cptr != '\0'){
      
      
      printf("%c is stored at address %x\n",*cptr,cptr);
      cptr++;
      
    }
    
    length = cptr - name;
    
    printf("\n Length of the string = %d\n",length);
    
    return 0;
    
}