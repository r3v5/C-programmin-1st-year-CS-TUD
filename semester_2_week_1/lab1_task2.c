/*
Program Description: This program does task 2 from Lab 11

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>


// Prototypes
void task_2(char symbol, int times);

int main()
{
    task_2('*', 5);
    return 0;
}


void task_2(char symbol, int times)
{
    int i;

    for (i = 0; i < times; i++)
    {
        printf("%c", symbol);
    }
}