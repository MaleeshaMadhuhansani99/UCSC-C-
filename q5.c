#include <stdio.h> 
#include <stdlib.h>
 
void main(){
    int a,b,n;
    int *p;
    int *max;

    printf("Input number of elements :");
    scanf("%d",&n);
    p=(int*) calloc (n,sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("Input element %d:",i);
        scanf("%d",p+i);
    }
    
    max = (p+0);
    for(int i=1;i<n;i++){
        if(*max < *(p+i)){
            *max = *(p+i);
        }
    }

    printf("Maximum element :%d",*max);
}