#include <stdio.h> 
   
void main(){
   int a,i,f=1;
   int *p;
   

   printf("Enter number : ");
   scanf("%d",&a);

   p=&f;

   for(i=1;i<=a;i++){
      *p=(*p) * i;
   }

   printf("Factorial : %d",f);

}

