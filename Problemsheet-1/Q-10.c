// Write a function to sort 1D array in ascending & descending order.

#include<stdio.h>

void input(int size, int arr[])
{
    int i;

        for(i=0 ; i<size ; i++)
        {
        
            printf("\n Enter The Elements [%d] : ",i+1);

            scanf("%d",&arr[i]);
        }

}

void display(int size, int arr[])
{
    int i,j,temp;

        for(i=0 ; i<size ; i++)
        {
            for(j=0 ; j<size ; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;


                }
            }
        }

        printf("\n Shorting in Desending Order : ");

        for(i=0 ; i<size ; i++)
        {

            printf("%d",arr[i]);
        }


                for(i=0 ; i<size ; i++)
                {
                    for(j=0 ; j<size ; j++)
                    {
                        if(arr[i]<arr[j])
                        {
                            temp=arr[j];
                            arr[j]=arr[i];
                            arr[i]=temp;

                        }
                    }
                }

                printf("\n Shorting in Acending Order : ");

                for(i=0 ; i<size ; i++)
                {

                    printf("%d",arr[i]);
                }

            

}

int main()
{

    int n;
        
        printf("Enter N : ");
            scanf("%d",&n);

        int a[n];

            input(n,a);
            display(n,a);

    return 0;

}