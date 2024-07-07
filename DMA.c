#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p; 
    int *a; 
    int i; 

    p = malloc(sizeof(int));
    a = calloc(5,sizeof(int));

    printf("\nEnter num");
    scanf("%d",p);//change 

    printf("\n p = %d",*p);//* value 
    
    
    for(i=0;i<5;i++){
        printf("\nEnter value");
        scanf("%d",&a[i]);//a[0]
    }
    
    for(i=0;i<5;i++){
        printf("\n%d ", a[i]);
    }
    return 0;
}