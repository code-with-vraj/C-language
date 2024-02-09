// Write user defined function calculate power of number n using recursion.

#include<stdio.h>




long power(int n ,int p)
{
    if(p)
    {
        return (n * p *( n , p-1 ));
    }
    return 1;
}

int main()
{
    int n,p;
    long result;

    printf("Enter The Number : ");
        scanf("%d",&n);

    printf("Enter your Power : ");
        scanf("%d",&p);

        result=power(n,p);

        printf("%d * %d is %d",n , p , result);


        return 0;
}