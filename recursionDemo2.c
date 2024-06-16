#include<stdio.h> 



void add(){
    printf("\nAdd");
}

void sub(int n){//5
    if(n!=0){ //base case 
       printf("\n%d",n);
       sub(--n);//recursion 
       printf("\n%d",n);

    }
}


void royal(int a,int b){//6 5 
    if(a >= b ){
        printf("\nRoyal");
    }else{
        printf("\nRoyal");//1 2 3 4 5 6
        royal(++a,--b);
    }
}

int main(){

    
    royal(1,10); 
    return 0;
} 