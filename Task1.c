#include<stdio.h>
#define S 5 

void task1(int target){
            //0 1 2 3 4 
    int a[]={ 3,1,6,4,5};
    
    int found = 0; 
    for(int i=0;i<S;i++){
        for(int j=i+1;j<S;j++){
            if(a[i] + a[j] == target){
                printf("\n%d  %d",i,j);
                found = 1; 
            }
        }
    }

    if(found == 0)
        printf("\n Target Fail : %d",target);

}


void task2(){

        //expr => 1+3 => 4 
        //expr=>2*3 => 6
        //9-9 => 0 
        char expr[4];
        printf("\nEnter expression");
        scanf("%s",&expr); 

        // logic 

}

int main(){
    
    // task1(9);
    // task1(19);
    // task1(5);
    
    
    return 0;   
}