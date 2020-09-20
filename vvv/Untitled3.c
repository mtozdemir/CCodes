#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXTEAMS 4



struct league{
    char teamName[50];
    char name[50];
    int teamScore;
    int team2Score;
    int totNoTeams;
    int points;
    int team1Points;
    int team2Points;
    int goalsFor;
    int goalsAgainst;
    int played;
    int won;
    int lost;
    int drawn;
};

void displayLeagueTable(struct league records[]);
void addTeam(struct league records[]);
void getTeam(struct league records[]);
void addResults(struct league records[]);
char displayMenu(void);





int main(void)
{

    struct league table[MAXTEAMS];
    char option;

        do
    {
        option = displayMenu();

        switch(option)
        {
        case 'a': getTeam(table),addTeam(table);
                break;
        case 'b': addResults(table);
                break;
        case 'c': displayLeagueTable(table);
                break;
        case 'd': //calculateResult(table);
                break;
        case 'e': break;
        }
    }while(option != 'e');

    return 0;
}

char displayMenu(void)
{
    char selection = 'X';

    printf("a\tAdd New Team\n\n");
    printf("b\tAdd Match Results\n\n");
    printf("c\tDisplay League Table\n\n");
    printf("d\tcalculate Result\n\n");
    printf("e\tExit\n\n");

    printf("\nSelection");
    scanf("%c", &selection);
    fflush(stdin);

    while(selection != 'a' && selection != 'b' && selection != 'c'
            && selection != 'd' && selection != 'e')
    {
        printf("\n ERROR, Select choices between a-g: ");
        scanf("%c", &selection);
        fflush(stdin);
    }

    return selection;
}



void getTeam(struct league records[])
{
    int i;
    for (i=0; i<MAXTEAMS; i++)
    {
        printf("Add new Team: \t\n\n");
        scanf("%s", &records[i].name);
        fflush(stdin);
    }
}

void addTeam(struct league records[])
{
    int i;

    for (i=0; i<MAXTEAMS; i++)
    {

        records[i].teamScore = 0;
        records[i].team2Score = 0;
        records[i].points = 0;
        records[i].team2Points = 0;
        records[i].goalsFor = 0;
        records[i].goalsAgainst = 0;
        records[i].played = 0;
        records[i].won = 0;
        records[i].lost = 0;
        records[i].drawn = 0;

    }
}


void addResults(struct league records[])
{

    int i;

    for ( i = 0; i < MAXTEAMS-1; i++)

    {
        printf("Home team is:  %s\n\n", records[i].name);

        printf("Enter Home teams score:\n");
        scanf("%d", &records[i].teamScore);
        fflush(stdin);

        printf("Away team is: %s \n\n", records[i+1].name);

        printf("Enter Away teams score:\n");
        scanf("%d", &records[i+1].teamScore, i++);
        fflush(stdin);

    if (strcmp(records[i+1].name, (records[i].name)) == 0)
    printf("Sorry teams Cannot play each other");
    }
}


void displayLeagueTable(struct league records[])
{
    int i;

    for ( i = 0; i < MAXTEAMS-1; i++)
    {
    if (records[i+1].teamScore > records[i].teamScore)
        {
            records[i+1].points += 3;
            records[i+1].won ++;
            records[i+1].played;
            records[i].won ;
            records[i].lost++;
            records[i].points =0 ;
            records[i].played++;

        }

      if (records[i].teamScore > records[i+1].teamScore)
        {
            records[i].points +=3;
            records[i].won ++;
            records[i].played++;
            records[i+1].lost++;
            records[i+1].points = 0;
            records[i+1].played++;

        }



        /*if (records[i].teamScore == records[i+1].teamScore)
        {
            records[i].points += 1;
            records[i].drawn ++;
            records[i].played++;
            records[i+1].drawn++;
            records[i+1].points += 1;
            records[i+1].played++;
        }*/


    printf(" LeagueTable \n\n");
    printf("**********************************************************\n\n");
    printf("Team\t Played Won  Drawn    Lost\tFor\tAgst\tPoints\n\n\n");
    printf("***********************************************************\n\n");
     }

    for ( i = 0; i < MAXTEAMS; i++)
    {
        printf("%s \t%d \t%d \t%d \t%d \t%d \t%d \t%d\n",
        records[i]. name, records[i].played, records[i].won,records[i].drawn,
        records[i]. lost, records[i].goalsFor, records[i].goalsAgainst,
        records[i].points);
    }
}
