#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *last = NULL;

// head is null that means linked list is empty -> we have to create first head

void addNode(int data)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->prev = last;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}


void addBeg(int data){
    struct node *tmp;
    if(head == NULL){
        addNode(data);
    }else {
        tmp = malloc(sizeof(struct node));
        tmp->data = data; 
        tmp->next = head; 
        tmp->prev = NULL; 
        head->prev = tmp; 
        head = tmp; 
    }
}

void deleteLast(){
    struct node *p = last->prev;
    p->next = NULL; 
    free(last); 
    last = p; 
}

void deleteBeg(){
        struct node *p = head; 
        head = head->next; 
        printf("\n%d removed ",p->data);
        free(p); 
        head->prev = NULL;
}
void display()
{
    struct node *p;
    for (p = head; p != NULL; p = p->next)
    {
        printf(" %d", p->data);
    }
}

void revDisplay()
{
    struct node *p;
    for (p = last; p != NULL; p = p->prev)
    {
        printf(" %d", p->data);
    }
}
int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    printf("\nSimple Display\n");
    display();
    
    printf("\nRev Display\n");
    revDisplay();

    return 0;
}