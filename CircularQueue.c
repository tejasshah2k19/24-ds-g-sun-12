#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (rear == SIZE - 1 && front == 0)
    {
        printf("\nQueue is Full");
    }
    else if (rear == front - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {

        // simple
        // cq - cycle
        if (rear == SIZE - 1 && front != 0)
        {
            rear = 0;
            queue[rear] = data;
        }
        else
        {
            rear++;
            queue[rear] = data;
            if (front == -1)
            {
                front = 0;
            }
        }
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("\nQueue IS Empty");
    }
    else if (front == rear)
    {
        printf("\n%d removed", queue[front]);
        front = -1;
        rear = -1;
    }
    else if (front == SIZE - 1)
    {
        printf("\n%d removed", queue[front]);
        front = 0;
    }
    else
    {
        printf("\n%d removed", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue IS Empty");
    }
    else
    {
        // front == rear
        if (rear >= front)
        {
            for (i = front; i <= rear; i++)
            {
                printf(" %d", queue[i]);
            }
        }
        else
        {
            for (i = front; i < SIZE; i++)
            {
                printf(" %d", queue[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf(" %d", queue[i]);
            }
        }
    }
}

int main()
{

    return 0;
}