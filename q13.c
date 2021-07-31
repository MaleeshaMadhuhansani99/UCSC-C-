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
   
   for(int i=0, j=n-1;i<j;i++,j--){
         temp=p[i];
         p[i]=p[j];
         p[j]=temp;
   
   }
    printf("Reversed array: ");
   for(int i=0;i<n;i++){
      printf(" %d\t",p[i]);
   }
}

   

