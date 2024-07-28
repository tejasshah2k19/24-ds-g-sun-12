#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct product
{

    int productId;
    char name[30];
    char category[30];
    int price;
    int qty;
    int discountPercentage;
    int rating;
};

int main()
{
    int choice;
    int j;
    char pname[30];
    int productId;  

    struct product tmp;
    struct product p[] = {
        {100, "iphone 13", "phone", 120000, 100, 10, 5},
        {21, "legion y 520", "lpatop", 25000, 12, 12, 3},
        {3, "Red Gear A15", "mouse", 750, 120, 5, 5}

    };

    int totalProducts = 3;
    int i;
    while (-1)
    {
        printf("\n0 For Exit");
        printf("\n1 For Add Product");
        printf("\n2 For List Product");
        printf("\n3 For Search By Name");
        printf("\n4 For Search By Id");
        printf("\nEnter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            // insert
            printf("\nHow many products you want to add");
            scanf("%d", &totalProducts);

            if (totalProducts < 1 || totalProducts > 10)
            {
                printf("\nInvalid Product count : [ Min-1 and Max-10 ]");
            }
            else
            {
                for (i = 0; i < totalProducts; i++)
                {
                    printf("\nEnter ProductId Name Category Price Qty DiscountPercentage Rating");
                    scanf("%d%s%s%d%d%d%d", &p[i].productId, &p[i].name, &p[i].category, &p[i].price, &p[i].qty, &p[i].discountPercentage, &p[i].rating);
                }
            }

            break;
        case 2:
            // list
            printf("\nProductId  Name          Category      Price      Qty  DiscountPercentage  Rating");
            for (i = 0; i < totalProducts; i++)
            {
                printf("\n%-10d %-15s %-10s %-10d %-5d %-18d %-3d", p[i].productId, p[i].name, p[i].category, p[i].price, p[i].qty, p[i].discountPercentage, p[i].rating);
            }
        case 3:
            printf("\nEnter Product Name");
            gets(pname);

            // list
            printf("\nProductId  Name          Category      Price      Qty  DiscountPercentage  Rating");
            for (i = 0; i < totalProducts; i++)
            {
                if (stricmp(p[i].name, pname) == 0)
                {
                    printf("\n%-10d %-15s %-10s %-10d %-5d %-18d %-3d", p[i].productId, p[i].name, p[i].category, p[i].price, p[i].qty, p[i].discountPercentage, p[i].rating);
                }
            }
            break;
        case 4:
            // sort
            for (i = 0; i < totalProducts; i++)
            {
                for (j = 0; j < totalProducts - 1; j++)
                {
                    if (p[j].productId > p[j + 1].productId)
                    {
                        tmp = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = tmp;
                    }
                }
            }
            // id
            printf("\nEnter Product Id");
            scanf("%d",&productId);
            // binarySearch -> id
            

            break;
        default:
            break;
        }
    }
    return 0;
}

// vivo      12
// s3        12
//