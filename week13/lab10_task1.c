/*
Program Description: This program does task 1 from Lab 10

Author: Ian Miller

Date: 12/12/2023
*/

#include <stdio.h>
#define LEN 8

int main()
{
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    char *ptr;

    ptr = &chars;

    for (int i = 0; i < LEN; i++)
    {
        if (*(ptr + i) == ' ')
        {
            *(ptr + i) = '_';
        }
    }
    
    printf("\nFinal array of chars:\n");
    for (int i = 0; i < LEN; i++)
    {
        printf("%c ", *(ptr + i));
    }
    
    return 0;
}