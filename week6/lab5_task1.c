/*
Program Description: This program does task 1 from Lab 5

Author: Ian Miller

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int num = 10;
    char comma = ',';

    while (num > 0)
    {
        printf("%d", num);
        if (num > 1)
        {
            printf("%c", comma);
        } 
        num --;
    }

    return 0;
}