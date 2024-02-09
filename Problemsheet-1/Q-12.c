//  Write a function to find the largest & the Smallest of 1 D array.

#include<stdio.h>

int input(int size , int a[])
{
    int i;


    for(i=0 ; i<size ; i++)
    {
        printf("Enter The Elements [%d]:",i+1 );

        scanf("%d",&a[i]);
    }


}

int display(int size , int a[])
{
    int max,i,j,min;


    for(i=0 ; i<size ; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    for(i=0 ; i<size ; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("\nMaximum Array Element :%d \n",max);

    printf("\nMinimum Array Element : %d ",min);

}

int main()
{
    int n, i;

    printf("Enter N : ");
        scanf("%d",&n);

        int a[n];

        input(n, a);
        display(n, a);

        return 0;
}