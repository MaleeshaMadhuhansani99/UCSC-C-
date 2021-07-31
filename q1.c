#include <stdio.h>  

void main(){
    int n,m;
    int *p;
    int *q;
    int sum;

    printf("Input number 1:");
    scanf("%d",&n);

    printf("Input number 2:");
    scanf("%d",&m);

    p=&n;
    q=&m;
   
    sum= *p+*q;

    printf("Sum :%d",sum);

 
}