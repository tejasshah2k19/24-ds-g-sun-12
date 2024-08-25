#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int num) // 10 20 30
{
    struct node *tmp;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void addNodeBeg(int num)
{
    struct node *tmp;
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}
void deleteAtEnd()
{
    struct node *p;
    if (head == NULL)
    {
        printf("\nList is Empty");
        return;
    }
    for (p = head; p->next != last; p = p->next)
        ;

    p->next = NULL;
    free(last);
    last = p;
}

void deleteBeg()
{
    struct node *p;
    if (head == NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        p = head;
        head = head->next;
        free(p);
    }
}

void addAny(int source, int num)
{
    struct node *p, *tmp;
    if (head == NULL)
    {
        addNode(num);
        return;
    }
    for (p = head; p != NULL; p = p->next)
    {
        if (p->data == source)
        {
            break;
        }
    }

    if (p == NULL)
    {
        printf("\nInvalid Source => %d", source);
    }
    else if (p == last)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        p->next = tmp;
    }
}
void deleteAny(int num)
{
    struct node *p, *q;

    if (head == NULL)
    {
        printf("\nList is Empty : ");
        return;
    }
    for (q = head; q != NULL; q = q->next)
    {
        if (q->next->data == num)
        {
            break;
        }
    }
    if (q == NULL)
    {
        printf("\nInvalid Source");
    }
    else
    {
        p = q->next;

        if (p == head)
        {
            deleteBeg();
        }
        else if (p == last)
        {
            deleteAtEnd();
        }
        else
        {
            q->next = p->next; 
            free(p); 
        }
    }
}
void display()
{
    struct node *i;

    for (i = head; i != NULL; i = i->next)
    {
        printf(" %d", i->data);
    }
}

void search(int key)
{
    struct node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == key)
        {
            printf("\n%d found", key);
            break;
        }
    }
    if (i == NULL)
    {
        printf("\n%d not found ", key);
    }
}

int main()
{
    int choice, source;
    int num;
    while (404)
    {
        printf("\n1 For Add Node + END");
        printf("\n2 For Add Node + BEG");
        printf("\n3 For Add Node + ANY");

        printf("\n4 For Delete Node - END");
        printf("\n5 For Delete Node - BEG");
        printf("\n6 For Delete Node - ANY");

        printf("\n7 For Display LinkedList");
        printf("\n0 EXIT\n");

        printf("\nEnter Your Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            printf("\nEnter number");
            scanf("%d", &num);
            addNodeBeg(num);
            break;
        case 4:
            deleteAtEnd();
            break;
        case 7:
            display();
            break;
        case 5:
            deleteBeg();
            break;
        case 3:
            printf("\nEnter source and new data");
            scanf("%d%d", &source, &num);
            addAny(source, num);
            break;
        case 6:
            deleteAny();
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}