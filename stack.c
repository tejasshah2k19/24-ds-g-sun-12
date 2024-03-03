#include<stdio.h>
#include<stdlib.h> 

#define SIZE 5 


int stack[SIZE];

int top=-1;//-1 -> EMPTY 


void push(int num){
    if(top == SIZE - 1){
        printf("\nOVERFLOW");
    }else{
        top++;
        stack[top] = num; 
    }
}

void pop(){
    if(top==-1){
        printf("\nUNDERFLOW");
    }else{
        printf("\n%d POP",stack[top]);
        top--; 
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}


int main(){
    //23 
    int choice; 
    int num;

    while(-1){ //1 true 0 false 
        printf("\n0 For Exit\n1 For PUSH\n2 For POP\n3 For Display\nEnter your choice");
        scanf("%d",&choice); 

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d",&num); 
            push(num);
            break;
        case 2:
            pop();
            break;
        case 2+1:
            display();
            break;
        default:
            printf("INVALID CHOICE PTA");
            break;
        }
    }
    return 0;
}