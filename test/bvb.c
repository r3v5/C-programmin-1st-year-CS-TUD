#include <stdio.h>
#include <string.h>

#define SIZE 20

// Prototypes
void find_bvb_player();


int main()
{
    find_bvb_player();

    return 0;
}


void find_bvb_player()
{
    FILE *fp;
    char name[SIZE];
    char one_line[SIZE];

    printf("Enter BVB player name: ");
    fgets(name, SIZE, stdin);
    name[strcspn(name, "\n")] = '\0';

    if ((fp = fopen("BVB.txt", "r")) == NULL)
    {
        printf("\nError\n");
    }
    else
    {
        while (fgets(one_line, SIZE, fp) != NULL)
        {
            one_line[strcspn(one_line, "\n")] = '\0';
            if (strcmp(name, one_line) == 0)
            {
                printf("\nThe player is found: %s\n", one_line);
            }
            else
            {
                printf("\nThe player isn't found:\n");
            }
        }
        fclose(fp);
    }
}