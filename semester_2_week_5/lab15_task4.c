/*
Program Description: This program does task 4 from Lab 15 Semester 2

Author: Ian Miller

Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 20


void concatenateAndDisplay(char word1[]) {
    char concatenated[2 * SIZE + 20];
    strcpy(concatenated, "First word entered is ");
    strcat(concatenated, word1);
    printf("%s\n", concatenated);
    printf("%s\n", word1);
}

void displayLength(char string[]) {
    int length = strlen(string);
    printf("Number of characters used: %d\n", length);
}

int main()
{
    char word1[SIZE];
    char word2[SIZE];

    printf("Enter first word: \n");

    fgets(word1, SIZE, stdin);

    printf("Enter second word: \n");
    fgets(word2, SIZE, stdin);

    puts(word1);
    puts(word2);

    if (strcmp(word1, word2) == 0)
    {
        printf("Words are the same!\n");
    }
    else
    {
        printf("Words are different\n");
    }

    concatenateAndDisplay(word1);
    displayLength(word1);
    
    return 0;
}
