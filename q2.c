#include <stdio.h> 
int sum(int *p,int *q){
    int sum;
    sum=*p+*q;
    return sum;

}
 
void main(){
    int n,m;
    
    printf("Input number 1:");
    scanf("%d",&n);

    printf("Input number 2:");
    scanf("%d",&m);

    printf("Sum :%d",sum(&n,&m));
}