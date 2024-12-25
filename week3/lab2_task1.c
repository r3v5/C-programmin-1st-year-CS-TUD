/*
Program Description: This program does task 2 from Lab 2

Author: Ian Miller

Date: 03/10/2023

*/

#include <stdio.h>

int main()
{
    int count = 0;
    int i;

    // calculate sum from 1 to 5
    for (i = 0; i < 5; i++)
    {
        count++;
    }
    
    printf("%d\n", count);

    // Calculate and display the average of the following floating-point numbers: 1.0, 1.1, 1.2, .... 2.0

    float res = 0.0;
    res = (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0) / 11;
    printf("Average = %f", res);

    return 0;
}