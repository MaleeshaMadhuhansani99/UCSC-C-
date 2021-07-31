#include <stdio.h> 
#include <string.h>
   
void main(){
   int n,temp;

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
      int min=p[i];
      for(int j=i+1;j<n;j++){
      if(min>*(p+j)){
         temp=p[i];
         p[i]=p[j];
         p[j]=temp;
      }
    }
      
   }
   printf("Sorted array :\n");
   for(int i=0;i<n;i++){
      printf("%d\t",*(p+i));

   }

}

   

