#include <stdio.h>
#define SIZE 10

int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//binary search -> your array must be sorted ...

void binarySearch(int search)
{
    int min, max, mid;
    int found = 0; // 0 not found

    min = 0;
    max = SIZE - 1;
    // min<max -> false
    while (min <= max)
    {
        mid = (min + max) / 2;

        if (a[mid] == search)
        {
            found = 1;
            break;
        }
        else if (search < a[mid])
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }

    } // while
    if (found == 1)
    {
        printf("\n%d found", search);
    }
    else
    {
        printf("\n%d not found", search);
    }
}

int main()
{

    binarySearch(-10);
    binarySearch(10);
    binarySearch(20);
    binarySearch(30);
    binarySearch(40);
    binarySearch(50);
    binarySearch(60);
    binarySearch(70);
    binarySearch(80);
    binarySearch(90);
    binarySearch(100);
    binarySearch(110);

    return 0;
}
// 