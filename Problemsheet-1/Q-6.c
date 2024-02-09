// Write a function to calculate sum of digits in the number N.

#include<stdio.h>

int sum(int n)
{
    int sum=0, digit ;

    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }

    return sum;

}
int main()
{
    int n,result;

    printf("Enter The NUmber : ");
        scanf("%d",&n);

        result=sum(n);

        printf("SUM : %d ",result);
       

        return 0;
}