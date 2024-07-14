#include<stdio.h>
#include<stdlib.h>


int main(){

    int *x; 
    int *arr; 
    int i;
    x = malloc(sizeof(int));//4 byte  x int 
    arr = calloc(5,sizeof(int));//5*4 => 20 byte 
    //pf sf 

    for(i=0;i<5;i++){
        printf("\nEnter values");
        scanf("%d",&arr[i]);
    }

    printf("\nElements in the ARRAY:  ");
    for(i=0;i<5;i++){
        printf(" %d",arr[i]);
    }

    free(x); 
    free(arr);

    return 0;
}