/*
Program Description: This program does task 3 from Lab 15 Semester 2

Author: Ian Miller

Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 100

// Prototypes
int number_of_chars(char sentence[SIZE]);


int main()
{
    char sentence[SIZE];

    printf("Enter the sentence: \n");

    fgets(sentence, SIZE, stdin);

    if (sentence[strlen(sentence) - 1 == '\n'])
    {
        sentence[strlen(sentence) - 1] = '\0';
    }
    
    int num_chars = number_of_chars(sentence);

    printf("Number of characters in the sentence: %d\n", num_chars);

    return 0;
}


int number_of_chars(char sentence[])
{
    int counter = 0;
    int i;

    for (i = 0; i < sentence[i] != '\0'; i++)
    {
        counter++;
    }

    return counter;
}