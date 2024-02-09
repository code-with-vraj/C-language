// Write a function to check whether a given number is Armstrong number or not


#include<stdio.h>

int amstrong(int n)
{
    int i,digit,sum=0,c;

    

    for(i=0; i<n ; i++)
    {
        digit=n%10;
        c=digit*digit*digit;
        sum=sum+c;
        n=n/10;
    }

    return sum;

    

}

int main()
{
    int n;

    printf(" Enter The Number : ");
        scanf("%d",&n);

        int temp;

   int sum=amstrong(n);

    if(sum)
    {
        printf("IS Amstrong Number : ");
    }
    else
    {
        printf("NOT Amstrong Number : ");
    }

    return 0;


}