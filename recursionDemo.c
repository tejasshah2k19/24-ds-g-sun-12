#include<stdio.h>

 

 
void sub(int n){
  
    printf("\n%d",n);
    if(n!=0){
        sub(--n);
        printf("\n%d",n);
    }
  
}
int main(){
    sub(5);
    return 0;
}
//base case / condition 
