#include <stdio.h>
#include <stdlib.h>

#define S 5

int queue[S];
int f = -1;
int r = -1;//empty 

void enqueu(int data)
{
    if (r == S - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        r++;
        queue[r] = data;
        if (f == -1)
            f = 0;
    }
}

void dequeue()
{
    if(f == -1){
        printf("\nQueue is Empty");
    }else if(f == r){
        printf("\n%d removed",queue[f]);
        f=-1;
        r=-1;
    }else{
        printf("\n%d removed",queue[f]);
        f++;  
    }
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("\nQueue Is Empty");
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", queue[i]);
        }
    }
    //500 
    //4byte * 5 lac => 
}

void count(){
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    int i;

    for(i=f;i<=r;i++){
        if(queue[i] < 10){
            one++;
        }else if(queue[i] < 100){
            two++;
        }else if(queue[i] < 1000){
            three++;
        }else {
            four++;
        }
    }

    printf("\n one   => %d",one);
    printf("\n two   => %d",two);
    printf("\n three => %d",three);
    printf("\n four  => %d",four);
    


}

int main()
{
    int choice, data;

    while (-1)
    {
        printf("\n0 EXIT\n1 INSERT\n2 Display\n3 DELETE\n4 COUNT\nChoice :: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter data");
            scanf("%d", &data);
            enqueu(data);
            break;
        case 2:
            display();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            count();
            break;
        default:
            printf("\nInvalid Choice PTA!!!");
            break;
        }
    }
    return 0;
}