#include <stdio.h>


struct Date {
    int d;
    int m;
    int y;    
};

void print(struct Date d1, struct Date d2)
{
    printf("\n The First Date : ");

        printf("%d/", d1.d);
        printf("%d/", d1.m);
        printf("%d", d1.y);

    printf("\n The Second Date : ");

        printf("%d/", d2.d);
        printf("%d/", d2.m);
        printf("%d", d2.y);
}

int compare(struct Date d1, struct Date d2)
{

        if(d1.d == d2.d && d1.m == d2.m && d1.y == d2.y)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
}

int main()
{
    struct Date d1;
    struct Date d2;

            printf("Enter First Date :\n");

                printf("Date : ");
                scanf("%d", &d1.d);

                printf("Month : ");
                scanf("%d", &d1.m);

                printf("Year : ");
                scanf("%d", &d1.y);

            printf("Enter Second Date :\n");

                printf("Date : ");
                scanf("%d", &d2.d);

                printf("Month : ");
                scanf("%d", &d2.m);

                printf("Year : ");
                scanf("%d", &d2.y);

         print(d1, d2);

            int ans = compare(d1, d2);

                 printf("\n\nComparison result: %d\n", ans);
 
            if(ans)
            {
                printf("THE COMPARISON RETURNS 0 SO THE DATES ARE EQUAL.\n");
            }
            else
            {
                printf("THE COMPARISON RETURNS 1 SO THE DATES ARE NOT EQUAL.\n");
            }

    return 0;
}
