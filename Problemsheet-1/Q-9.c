//  Write a function to display return factorial of integer n.

#include<stdio.h>

int factorial(int);

int factorial(int n)
{
    int f=1,j;

    for(int i=1 ; i<n ; i++)
    {
        f=f*i;
    }

    return f;
}

int main()
{
    int fact , n;

        printf("Enter Number : ");
            scanf("%d",&n);

        fact=factorial(n);

        printf("factorial Of %d is %d ",n,fact);
}
