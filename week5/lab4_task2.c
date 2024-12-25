/*
Program Description: This program does task 2 from Lab 4

Author: Ian Miller

Date: 17/10/2023

*/

#include <stdio.h>

int main()
{
    int var;

    printf("enter an integer between 1 and 100\n");
    scanf("%d", &var);

    if (var % 2 == 0)
    {
        printf("%d is an even number\n", var);
    }
    else
    {
        printf("%d is an odd number\n", var);
    }

    return 0;
}