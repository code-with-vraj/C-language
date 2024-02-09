// Write a function to find the largest & the smallest element of 2 D array



#include<stdio.h>

void input(int size, int arr1[size][size], int arr2[size][size] )
{
    int i, j;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
        printf("Enter value at [%d][%d] : ",i+1,j+1);

            scanf("%d",&arr1[i][j]);
            arr2[i][j] = arr1[i][j];
        }
    }


   

}

void display(int size, int arr1[size][size], int arr2[size][size])
{

    int i, j, max,min;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            
                if(max <arr1[i][j] )
                {
                   max=arr1[i][j];
                }
            
        }
       
    }
    //cols wise shorting in Decanding order
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
              if(min >arr1[i][j] )
                {
                   min=arr1[i][j];
                }
        }
    }

    //output

    printf("\nMaximum Array Element :%d \n",max);

    printf("\nMinimum Array Element : %d ",min);

    //printing input
    printf("\nData Enter by you : \n");
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }


    

}

int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int a[n][n],b[n][n];

    input(n, a ,b);
    display(n, a ,b);

    return 0;
}



