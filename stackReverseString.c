#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

#define SIZE 5000 


char stack[SIZE];

int top=-1;//-1 -> EMPTY 


void push(char num){
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
        printf("\n%c POP",stack[top]);
        top--; 
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%c",stack[i]);
    }
}

void peep(int location){
    int index;
    index = top - location + 1 ;
    if(index >= 0 && index < SIZE){
        printf("\n %c",stack[index]);
    }else{
        printf("\nInvalid Location");
    }
}

int main(){
    //23 
    int choice; 
    char num[10];
    int location; 
    int i;

    printf("\nEnter the String");
    gets(num); //royal 
 
    for(i=0;i < strlen(num);i++){
        push(num[i]); 
    }
    printf("\n str = %s",num);

    printf("\nREVERSE =>\n");
    display(); 
    
    return 0;
}