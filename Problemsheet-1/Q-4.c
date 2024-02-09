// Create a structure called library to hold accession number, title of the book, author name, price of 
// the book, and flag indicating whether book is issued or not. Write a menu driven program that 
// depicts the working of a library. The menu options should be: 
// 1. Add book information 
// 2. Display book information 
// 3. List all books of given author 
// 4. List the title of specified book 
// 5. List total no. of books in the library 
// 6. List the books in the order of accession number 
// 7. Exit


#include <stdio.h>
#include <string.h>



struct library
{
    int accession_number;
    char title[50];
    char author[50];
    float price;
    
};

int main()
{
    int n;

        printf("Enter The Total Books : ");
            scanf("%d",&n);


    struct library books[n];
    char sea[50];

    int accession_number;
     int found = 0;
   
    int choice;

         printf("\nLibrary Management System Menu\n");
    menu :
       
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List total no. of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");

            printf("\nEnter your choice: ");
            scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            for(int i=0 ; i<n ; i++)
            {
            
                printf("\nEnter book information %d\n",i+1);

                printf("Accession Number: ");
                scanf("%d", &books[i].accession_number);

                printf("Title: ");
                scanf("%s", books[i].title);

                printf("Author: ");
                scanf("%s", books[i].author);

                printf("Price: ");
                scanf("%f", &books[i].price);

                

               
            }
            goto menu;

           
        case 2:
           
         

                printf("Displaying book information:\n");

               
                 printf("Accession No.\t Title\t Author\t\t Price\n");
                 for(int i=0 ; i<n ; i++)
                {
                     printf("%d\t\t %s\t %s\t\t %f\n", books[i].accession_number,books[i].title, books[i].author,books[i].price );

                          
                }
            goto menu;
        case 3:
           
                printf("\n Which Author Book You Want To Get : ");
                        scanf("%s",sea);


                        int found =0;

                        for(int i=0 ; i<n ; i++)
                        {
                            if(strcmp(sea,books[i].author)==0)
                            {
                                if(found==0)
                                {
                                    printf("\n Name\t Price\n");

                                    found++;
                                }
                            }
                        }
               
           
            goto menu;

        case 4:
           
                
               

                printf("Enter accession number: ");
                scanf("%d", &accession_number);

                 for(int i=0 ; i<n ; i++)
                {
                    if (books[i].accession_number == accession_number)
                    {
                        printf("\nTitle of the book with Accession No. %d is: %s\n",
                               accession_number, books[i].title);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                {
                    printf("No book found with Accession No. %d.\n", accession_number);
                }
            
            goto menu;

        case 5:

            printf("Total number of books in the library: %d\n", n);

           goto menu;
        case 6:
           
                // Sort books by accession number
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = 0; j < n - i - 1; j++)
                    {
                        if (books[j].accession_number > books[j + 1].accession_number)
                        {
                            // Swap
                            struct library temp = books[j];
                            books[j] = books[j + 1];
                            books[j + 1] = temp;
                        }
                    }
                }

                printf("Books in the order of accession number:\n");
               

                 printf("Accession No.\t Title\t Author\t\t Price\n");
                 for(int i=0 ; i<n ; i++)
                {
                    printf("%d\t\t %s\t %s\t\t %f\n", books[i].accession_number,books[i].title, books[i].author,books[i].price );

                                  
                }
           goto menu;

        case 7:

            printf("Exiting the program. Goodbye!\n");

           goto menu;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    

    return 0;
}
