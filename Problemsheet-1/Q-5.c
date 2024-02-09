// Write a function called leap() that receives the year as a parameter and returns 0 if it is a leap year, 
// otherwise it returns 1.


#include<stdio.h>

int leap(int n)
{
    if(n%4==0)
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
    int n;

        printf("Enter Year : ");
            scanf("%d",&n);

        int flag;

            flag=leap(n);

            if(flag==0)
            {
                printf(" LEAP year ");
            }
            else
            {
                printf(" NOT LEAP Year ");
            }

    return 0;
}