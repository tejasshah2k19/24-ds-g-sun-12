#include<stdio.h>
#define SIZE 5 


int a[SIZE]; 


void getData(){
    int i ;
    for(i=0;i<SIZE;i++){
        printf("\nEnter value");
        scanf("%d",&a[i]);
    }
}   

void display(){
    int i ;
    printf("\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}

void insertionSort(){
    int i,j,tmp;

    for(i=1;i<SIZE;i++){
        tmp = a[i]; 
        for(j=i-1; j>=0 ;j--){
            if(a[j] > tmp ){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = tmp ;
    }
}

int main(){

    getData();//scan array 
    display();//print array -- unsorted 
    insertionSort();//sort 
    display(); //print array -- sorted 

    return 0; 
}