#include<stdio.h>
#define SIZE 10 

int a[] ={11,66,22,77,33,75,44,99,55,5};
//        0                          9  
//0-9 
void divide(int a[],int min,int max){// 0 4  
                                     //           
    int mid = (min+max)/2;  //2 

 
    if(min<max){ //0 2 4  
        divide(a,min,mid);// 
        divide(a,mid+1,max);// 
    }


}

int main(){

    divide(a,0,SIZE-1);// 0 9 

}