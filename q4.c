#include <stdio.h> 
 
void main(){
    int a,b,n;
    
    printf("Number of elements:");
    scanf("%d",&n);
    int array[n];

    int *p=array;

    printf("\n");
    
    for(int i=0;i<n;i++){
        printf("Input element %d:",i);
        scanf("%d",(p+i));
    }

    printf("\n");
    
    p= &array[0];
    for(int i=0;i<n;i++){
    printf("%d\t",*(p+i));
    
    }
}

    