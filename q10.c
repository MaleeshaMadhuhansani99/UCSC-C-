#include <stdio.h> 
#include <string.h>
   
void main(){
   int count1=0,count2=0;
   char array[100];
   char *p;

   printf("Input string: ");
   gets(array);
   int length=strlen(array);
   p=array;
   
   
   for(int i=0;i<length;i++){
      if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u' || *(p+i)=='A' || *(p+i)=='E' || *(p+i)=='I' || *(p+i)=='O' || *(p+i)=='U'){
         count1++;
      }else if(*(p+i)=='b' || *(p+i)=='c' || *(p+i)=='d' || *(p+i)=='f' || *(p+i)=='g' || *(p+i)=='h' || *(p+i)=='j' || *(p+i)=='k' || *(p+i)=='l' || *(p+i)=='m' || *(p+i)=='n' || *(p+i)=='p' || *(p+i)=='q' || *(p+i)=='r' || *(p+i)=='s' || *(p+i)=='t' || *(p+i)=='v' || *(p+i)=='w' || *(p+i)=='x' || *(p+i)=='y' || *(p+i)=='z' || *(p+i)=='B' || *(p+i)=='C' || *(p+i)=='D' || *(p+i)=='F' || *(p+i)=='G' || *(p+i)=='H' || *(p+i)=='J' || *(p+i)=='K' || *(p+i)=='L' || *(p+i)=='M' || *(p+i)=='N' || *(p+i)=='P' || *(p+i)=='Q' || *(p+i)=='R' || *(p+i)=='S' || *(p+i)=='T' || *(p+i)=='V' || *(p+i)=='W' || *(p+i)=='X' || *(p+i)=='Y' || *(p+i)=='Z'){
         count2++;
      }
   }
printf("vowels :%d\n",count1);
printf("consonants :%d\n",count2);

}

   

