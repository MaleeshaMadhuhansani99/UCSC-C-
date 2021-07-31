#include <stdio.h> 

int swap(int *a, int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
   printf("a:%d , b:%d", (*a), (*b));
}
   
void main(){
   int a,b;

   printf("Input number for a: ");
   scanf("%d",&a);

   printf("Input number fpr b: ");
   scanf("%d",&b);
   
   swap(&a,&b);

}

