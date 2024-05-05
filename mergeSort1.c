#include <stdio.h>

#define S1 5
#define S2 5
#define S3 S1 + S2

int a[] = {10, 20, 30, 40, 50};
int b[] = {5, 7, 11, 25, 32};
int c[S3];

void mergeSort()
{
    int i = 0, j = 0, k = 0;

    while (i < S1 && j < S2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while(i<S1){
        c[k++]=a[i++];
    }
    while(j<S2){
        c[k++]=b[j++];   
    }

}

void display()
{
    int i;
    for (i = 0; i < S3; i++)
    {
        printf(" %d", c[i]);
    }
}

int main()
{
    mergeSort();
    display();
    return 0;
}
