#include <stdio.h>
#include <string.h>

#define MARVEL_SIZE 6
#define NAME_SIZE 20

// Prototypes
void guess_avenger();
void enter_avenger();


int main()
{   
    guess_avenger();
    enter_avenger();

    return 0;
}


void guess_avenger()
{
    char name[NAME_SIZE];
    char *avengers[MARVEL_SIZE] = {"Iron Man", "Captain America", "Black Widow", "Thor", "Hulk", "Hawkeye"};
    int i;
    int found = 0;

    printf("Enter the name of Avenger:\n");
    fgets(name, NAME_SIZE, stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; i < MARVEL_SIZE; i++)
    {
        if (strcmp(name, *(avengers + i)) == 0)
        {
            found = 1;
        }
    }

    if (found == 1)
    {
        printf("\nCorrect\n");
    }
    else
    {
        printf("\nBad guess – not an Avenger\n");
    }
    
}


void enter_avenger()
{
    char name[NAME_SIZE];
    FILE *fp_in, *fp_out;

    printf("\nEnter the name of favourite avenger:\n");
    fgets(name, NAME_SIZE, stdin);
    name[strcspn(name, "\n")] = '\0';

    if ((fp_in = fopen("Avengers.txt", "r")) == NULL)
    {
        printf("\nError\n");
    }
    else if ((fp_out = fopen("new.txt", "w")) != NULL)
    {      
        fputs(name, fp_out);
        printf("\nSuccessfully add your favourite avenger to file\n");
        fclose(fp_out);
    }
    fclose(fp_in);
}