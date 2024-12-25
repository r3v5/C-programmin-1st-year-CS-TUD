/*
Program Description: This program does the following: 
1) The user must guess the random generated number by entering any number
between 1 – 25 (inclusive).
2) The user has a maximum number of attempts, i.e., 5 (MAX_ATTEMPTS) to
guess the random generated number.
3) After each guess, the program will state whether the guess is too low, too high,
or correct.
4) The program keeps track of the guess history using the array
(guessHistory[]).
5) The game loop continues until the user guesses the correct number OR uses all
attempts, i.e., max of 5 attempts.
6) At the end of the game, the program must display the user guess history, i.e.,
all guess attempts entered.

Author: Ian Miller

Date: 28/11/2023

*/


#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0;
    int guessHistory[MAX_ATTEMPTS];
    int attempts = 0;
    // place any extra variables here

    
    printf("Generating a random number between 1 – 25 \n");
    
    // seed the random number generator with a range 0 – large number
    srand(time(NULL));
    
    // num is assigned a random number between 1 – 10 
    num = (rand() % 25) + 1;
    
    // Enter your code here and onward (declare any extra variables above)
    printf("Enter your guess attempt: \n");

    // The game loop continues until the user guesses the correct number OR uses all attempts, i.e., max of 5 attempts.
    for (attempts = 0; attempts < MAX_ATTEMPTS; attempts++)
    {
        // The user has a maximum number of attempts, i.e., 5 (MAX_ATTEMPTS) toguess the random generated number and the program keeps track of the guess history using the array (guessHistory[]).
        scanf("%d", & *(guessHistory + attempts));

        // After each guess, the program will state whether the guess is too low, too high, or correct.
        if (*(guessHistory + attempts) == num)
        {
            printf("Your guess is correct!\n");
            // The game loop will end because the user guesses the correct number
            break;
        }
        if (*(guessHistory + attempts) < num)
        {
            printf("Your guess is too low!\n");
        }
        if (*(guessHistory + attempts) > num)
        {
            printf("Your guess is too high!\n");
        }
    }
    
    // At the end of the game, the program must display the user guess history, i.e., all guess attempts entered.
    printf("\nYour guesses history: \n");
    for (attempts = 0; attempts < MAX_ATTEMPTS; attempts++)
    {
        printf("%d\n", *(guessHistory + attempts));
    }
    
    return 0;
} // end main