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
    struct student *s; // 79* bytes
    // 16byte -> 16
 
    // s = (struct student*)malloc(sizeof(struct student));//79
    s = malloc(sizeof(struct student)); // 79

    printf("\nEnter name batch Rank and colgName");
    scanf("%s%s%d%s", &s->name, &s->batch, &s->rank, &s->colgName);

    printf("\nName = %s\nBatch = %s\nRank = %d\nColgName = %s", s->name, s->batch, s->rank, s->colgName);

    free(s); 
    return 0;
}