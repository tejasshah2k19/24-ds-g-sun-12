#include <stdio.h>
#define SIZE 8

int master[] = {12, 34, 56, 78, 98, 98, 54, 90}; // 8

int playerA[SIZE];
int playerB[SIZE];

void distribute()
{
    int i = 0, x = 0, y = 0;

    while (i < SIZE)
    {
        playerA[x] = master[i];
        i++;
        x++;
        playerB[y] = master[i];
        i++;
        y++;
    }
}

void display()
{
    // playerA
    // playerB
    int i;
    // PlayerA[]={12,56,98,54}
    printf("\nPlayerA : ");
    for (i = 0; i < SIZE; i++)
    {

        printf(" %d", playerA[i]);
    }
    // PlayerB[]={34,78,98,90}
    printf("\nPlayerB : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", playerB[i]);
    }
}

int main()
{

    distribute();
    display();
    return 0;
}