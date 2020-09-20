#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int MAXTEAMS;



struct league{
    char isim[50];
    char takma_isim[50];
    int atilan_gol;
    int yenen_gol;
    int averaj;
    int puan;
    int oynanan_mac;
    int galibiyet;
    int maglubiyet;
    int beraberlik;
}takim[MAXTEAMS];

void displayLeagueTable(struct league records[]);
void addTeam(struct league records[]);
void getTeam(struct league records[]);
void addResults(struct league records[]);
char displayMenu(void);
void takim_oku(struct league records[]);
void dosya_oku();

    int num;
    FILE *fp;
int main(void)
{

    dosya_oku();
    MAXTEAMS=num;

    struct league table[MAXTEAMS];

    takim_oku(table);

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
    scanf("%s", &selection);
    fflush(stdin);

    while(selection != 'a' && selection != 'b' && selection != 'c'
            && selection != 'd' && selection != 'e')
    {
        printf("\n ERROR, Select choices between a-g: ");
        scanf("%s", &selection);
        fflush(stdin);
    }

    return selection;
}



/*
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
}*/


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
    int i,j;

    for ( i = 0; i < MAXTEAMS-1; i++)
    {
        if (records[i].teamScore > records[i+1].teamScore)
        {
            records[i].points += 2;
            records[i].won ++;
            records[i].played++;
            records[i+1].lost++;
            records[i+1].points -= 1;
            records[i+1].played++;}



        if (records[i].teamScore < records[i+1].teamScore) // 5 2 - 3 5
        {
            records[i+1].points += 2;
            records[i+1].won ++;
            records[i+1].played++;
            records[i].lost++;
            records[i].points -= 1;
            records[i].played++;

        }
        /*else if (records[i].teamScore!='0' && records[2*i].teamScore == records[2*i+1].teamScore)
        {
            records[2*i].points++;
            //records[2*i].won ++;
            records[2*i].played++;
            //records[i+1].lost++;
            records[2*i+1].points++;
            records[2*i+1].played++;
        }
    }

    printf(" LeagueTable \n\n");
    printf("**********************************************************\n\n");
    printf("Team\tPlayed\tWon\tDrawn\tLost\tFor\tAgst\tPoints\n\n\n");
    printf("***********************************************************\n\n");


    for ( i = 0; i < MAXTEAMS; i++)
    {
        printf("%s \t%d \t%d \t%d \t%d \t%d \t%d \t%d\n",
        records[i].name, records[i].played, records[i].won,records[i].drawn,
        records[i].lost, records[i].goalsFor, records[i].goalsAgainst,
        records[i].points);
    }
}*/
void dosya_oku(){
    fp=fopen("oku1.txt","r");

    fscanf(fp,"%d", &num);
}
    void takim_oku(struct league records[]){


    char dizii[MAXTEAMS][12];
    int i=1;
    while(i<=MAXTEAMS){
        fscanf(fp, "%s", dizii[i-1]);
        records[i-1].name=dizii[i-1];
        i++;
    }

 /*   for ( i = 0; i < MAXTEAMS; i++)
    {
        printf("%s \t%d \t%d \t%d \t%d \t%d \t%d \t%d\n",
        records[i].name, records[i].played, records[i].won,records[i].drawn,
        records[i].lost, records[i].goalsFor, records[i].goalsAgainst,
        records[i].points);
    }*/
    }
void sirala(char Kelimeler[ametin][100]){
int x,ametin,y;
char t[100];
for (x = 1; x < ametin; x++)
    {
        for (y = 1; y < ametin; y++)
        {
            if (strcmp(Kelimeler[y - 1], Kelimeler[y]) > 0)
            {
                strcpy(t, Kelimeler[y - 1]);
                strcpy(Kelimeler[y - 1], Kelimeler[y]);
                strcpy(Kelimeler[y], t);
            }
        }
    }
printf("\nMetindeki Kelimeleriniz Alfabetik Olarak Siralandi: ");
    for (x = 0; x < ametin; x++)
        printf("\n%s", Kelimeler[x]);
    return 0;

}
