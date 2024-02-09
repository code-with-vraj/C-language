//  Define a structure called cricket that will describe the following information: 
// (Player name, Team name, batting average)
// Using cricket, declare an array player with 20 elements and write a program to read the information
// about all the 20 players and print a team-wise list containing names of players with their batting 
// average.


#include<stdio.h>

struct cricket
{
    char player[50];
    char tname[50];
    float  batting_average;

};


int main()
{
    int n;

        printf("Enter The total Player : ");
            scanf("%d",&n);

            struct cricket c[n];

            for(int i=0 ; i<n ; i++)
            {
                printf("Player : %d\n",i+1);

                printf("Enter Player Name : ");
                    scanf("%s",c[i].player);

                printf("Enter The Team : ");
                    scanf("%s",c[i].tname);

                printf("Batting average : ");
                    scanf("%f",&c[i].batting_average);

            
            }

            printf("\nTeam\t Player\t Batting average\n\n");

            for(int i=0 ; i<n ; i++)
            {
                printf("\n%s\t %s\t %f\n",c[i].tname, c[i].player, c[i].batting_average);
            }

            return 0;
}