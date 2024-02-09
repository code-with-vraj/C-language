// Write a function to sort 2D array in ascending & descending order


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

    int i, j, k , temp1,temp2;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            for(int k = 0 ; k < 3 ; k++)
            {
                if(arr1[i][j] < arr1[i][k])
                {
                    temp1 = arr1[i][k];
                    arr1[i][k] = arr1[i][j];
                    arr1[i][j] = temp1;
                }
            }
        }
        temp1 = 0;
    }

    //cols wise shorting in Decanding order
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            for(int k = 0 ; k < 3 ; k++)
            {
                if(arr2[i][j] > arr2[i][k])
                {
                    temp2 = arr2[i][k];
                    arr2[i][k] = arr2[i][j];
                    arr2[i][j] = temp2;
                }
            }
        }
        temp2 = 0;
    }

    //output

    //printing input
    printf("Data Enter by you : \n");
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }


    

    //rows wise
    printf("row wise shorting in Accending : \n");
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //cols wise
    printf("cols wise shorting in Decanding : \n");
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",arr2[i][j]);
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



