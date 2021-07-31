#include <stdio.h> 
#include <string.h>
   
void main(){
   char temp;
   char array[100];
   char *p;

      printf("Input string : ");
      gets(array);
      int length=strlen(array);
   
    p=array;
   
   for(int i=0, j=length-1;i<j;i++,j--){
         temp=*(p+i);
         *(p+i)=*(p+j);
         *(p+j)=temp;
   
   }
    printf("Reversed array: ");
   for(int i=0;i<length;i++){
      printf("%c",*(p+i));
   }
}

   

