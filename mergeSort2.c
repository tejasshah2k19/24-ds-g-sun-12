#include<stdio.h>
#define SIZE 10 

int a[] ={11,66,22,77,33,75,44,99,55,5};
//        0                          9  

void divide(int a[],int min,int max){// 0,9  0,4  0,2   0,1 0,0
                                                //5,9 7,9   8,9 9,9
    int mid = (min+max)/2; //40

    //0 1 2 3 4             5 6 7 8 9 
    if(min<max){ //0 9 
        divide(a,min,mid);//0,0  04 02 01 
        divide(a,mid+1,max);//5,9
    }


}

int main(){

    divide(a,0,SIZE-1);

}