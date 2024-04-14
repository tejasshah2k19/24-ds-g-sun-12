#include<stdio.h>
#define SIZE 5 

int arr[SIZE]; 


void getData(){
    //scan data  for array 
    int i;
    for(i=0;i<SIZE;i++){
        printf("\nEnter value");
        scanf("%d",&arr[i]);
    }
}

void printData(){
    //print data from array 
    int i;
    printf("\nElements in the Array\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",arr[i]);
    }
}

void selectionSort(){
    //sort array
    int i,j,min,tmp; 

    for(i=0;i<SIZE;i++){
        min=i; 
        for(j=i+1;j<SIZE;j++){
            if(arr[min] > arr[j]){
                min = j; 
            }
        }
        //swap 
        tmp = arr[min];
        arr[min] = arr[i];
        arr[i] = tmp;     
    }
}

int main(){

    getData();
    printf("\nArray Before Sorting\n");
    printData();
    selectionSort();//sort 
    printf("\nArray After Sorting\n");
    printData();//array sorted 

    return 0; 
}