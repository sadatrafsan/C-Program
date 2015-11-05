#include <stdio.h>
#include <math.h>

#define MAXSIZE 100 

int main(){  
  
      int n,i;
      
      float value[MAXSIZE],deviation,sum,sumsqr,mean,variance,stddeviation;
      
      sum = sumsqr = n = i = 0;
      
      printf("Enter values: enter -1 to stop:");
      
     for(i=0; i<MAXSIZE; i++){
      
      	scanf("%f",&value[i]);
      	
      	if(value[i] == -1){
      	
      		break;
      	}
      	else{
      	
      		sum += value[i];

   			n++;
   		}
      }
      
      mean = sum/(float)n;
      
      for(i=1; i<=n; i++){
      
      	deviation = value[i] - mean;
      	
      	sumsqr += deviation * deviation;
      
      }
      
      variance = sumsqr / (float)n;
      
      stddeviation = sqrt(variance);
      
 
      printf("\n\n Number of Items:%d, Mean:%f, Standard Deviation:%f",n,mean,stddeviation);  
      printf("\n\n");
      
      return 0;
 } 	
