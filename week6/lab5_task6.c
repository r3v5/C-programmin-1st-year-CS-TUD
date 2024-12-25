/*
Program Description: This program does task 6 from Lab 5

Author: Ian Miller

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for (i = 1; i < 99; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    printf("The sum of odd numbers from 1-99 is %d\n", sum);

    return 0;
}