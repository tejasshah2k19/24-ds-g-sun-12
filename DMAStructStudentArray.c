#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[21];     // 25
    char batch[22];    //
    int rank;          //
    char colgName[23]; //
};

int main()
{
    int totalStudents;
    int i;
    struct student *s; // 79* bytes
    // 16byte -> 16

    printf("\nHow many Student You want to Enroll!!!");
    scanf("%d", &totalStudents);
    s = calloc(totalStudents, sizeof(struct student)); // 79

    // X 33
    // Y 22
    // Z 11

    for (i = 0; i < totalStudents; i++)
    {

        printf("\nEnter name batch Rank and colgName");
        scanf("%s%s%d%s", &s[i].name, &s[i].batch, &s[i].rank, &s[i].colgName);
    }
    // X 33
    // Y 22
    // Z 11

    for (i = 0; i < totalStudents; i++)
    {
        printf("\n**********\n");
        printf("\nName = %s\nBatch = %s\nRank = %d\nColgName = %s", s[i].name, s[i].batch, s[i].rank, s[i].colgName);
    }

    // some code goes here

    // Z 11
    // Y 22
    // X 33

    for (i = 0; i < totalStudents; i++)
    {
        printf("\n**********\n");
        printf("\nName = %s\nBatch = %s\nRank = %d\nColgName = %s", s[i].name, s[i].batch, s[i].rank, s[i].colgName);
    }
    // X 33
    // Y 22
    // Z 11

    free(s);
    return 0;
}