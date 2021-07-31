#include <stdio.h> 
#include <string.h>
   
void main(){
   int n,sum;

   printf("Input number of elemets :");
   scanf("%d",&n);
   int array[n];
   int *p;
   p=array;

   for(int i=0;i<n;i++){
      printf("Input element %d : ",i);
      scanf("%d",&p[i]);
   }
   
   for(int i=0;i<n;i++){
         sum=sum+p[i];
      
   }
   printf("Sum :%d",sum);
}

   

