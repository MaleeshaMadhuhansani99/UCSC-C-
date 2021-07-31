#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int length(char*p){
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}

void main()
{
   char string[100];
   int size;

   printf("Enter string : ");
   gets(string);

   printf("Length of the string is : %d",length(string));

}

