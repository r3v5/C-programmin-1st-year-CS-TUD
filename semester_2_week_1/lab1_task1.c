/*
Program Description: This program does task 1 from Lab 11

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>

#define STARS 10


// Prototypes
void stars();


int main()
{
    stars();
    return 0;
}


void stars()
{
    int i;

    for (i = 0; i < STARS; i++)
    {
        printf("*");
    }
    
}