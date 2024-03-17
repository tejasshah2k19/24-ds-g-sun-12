#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];

int top = -1; //-1 -> EMPTY

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        printf("\n%d POP", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

void peep(int location)
{
    int index;
    index = top - location + 1;
    if (index >= 0 && index <=top)
    {
        printf("\n %d", stack[index]);
    }
    else
    {
        printf("\nInvalid Location");
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack UnderFlow");
    }
    else
    {
        printf("\n%d", stack[top]);
    }
}

int main()
{
    // 23
    int choice;
    int num;
    int location;

    while (-1)
    { // 1 true 0 false
        printf("\n0 For Exit\n1 For PUSH\n2 For POP\n3 For Display\n4 For Peep\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 2 + 1:
            display();
            break;
        case 2 * 2:
            printf("\nEnter the location");
            scanf("%d", &location);
            peep(location);
            break;
        default:
            printf("INVALID CHOICE PTA");
            break;
        }
    }
    return 0;
}