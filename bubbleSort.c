#include<stdio.h>
#define SIZE 10 

int a[] ={26,98,85,62,68,45,214,745,-21,5};


void printData(){
    int i;
    printf("\nArray data:\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}

void bubbleSort(){
    int j,i;
    int tmp; 

    for(i=0;i<SIZE;i++){ 
        for(j=0;j<SIZE-1;j++){
            if(a[j] > a[j+1]){
                tmp = a[j]; 
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

}

int main(){

    printData(); 
    bubbleSort();
    printData();

    return 0;
}