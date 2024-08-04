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

void shiftByOne()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (playerA[i] == 0)
        {
            break;
        }
        playerA[i] = playerA[i + 1];
    }

    for (i = 0; i < SIZE; i++)
    {
        if (playerB[i] == 0)
        {
            break;
        }
        playerB[i] = playerB[i + 1];
    }
}

int isEmpty()
{
    // if both the player has zero card -> 3
    // if playerA has zero card -> 1
    // if playerB has zero card -> 2
    // both having card -> 0

    if (playerA[0] == 0 && playerB[0] == 0)
    {
        return 3;
    }
    else if (playerA[0] == 0)
    {
        return 1;
    }
    else if (playerB[0] == 0)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
void battle(int count)
{
    int battle[SIZE];
    printf("\nBattle : %d", count);
    battle[0] = playerA[0]; // 12
    battle[1] = playerB[0]; // 34

    shiftByOne();

    // winner
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
    int gameStatus;
    int i;
    distribute();
    display();

    for (i = 1; i <= 50; i++)
    {
        battle(i);
        display();
        gameStatus = isEmpty();
        if (gameStatus == 0)
        {
            continue;
        }
        else if (gameStatus == 1)
        {
            printf("\nPlayerB is the Game Winner");
            break;
        }else if(gameStatus == 2){
            printf("\nPlayerA is the Game Winner");
            break;
        }else{
            printf("\nGame TIE");
            break;
        }
    }
    return 0;
}