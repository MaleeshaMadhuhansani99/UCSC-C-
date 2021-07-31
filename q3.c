#include <stdio.h> 
 
void main(){
    int n,m;
    int max;
    int *p;
    int *q;
    
    printf("Input number 1:");
    scanf("%d",&n);

    printf("Input number 2:");
    scanf("%d",&m);

    p=&n;
    q=&m;

    if(p > q){
        max=*p;
    }else{
        max=*q;
    }

    printf("Maximum number :%d",max);
}