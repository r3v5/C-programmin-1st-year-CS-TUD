/*
Program Description: This program does task 3 Question 5 from Lab 4

Author: Ian Miller

Date: 17/10/2023

*/

#include <stdio.h>

int main()
{
    int side1;
    int side2;
    int side3;

    printf("Enter three sides of triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 + side2) > side3)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Not valid triangle");
    }

    return 0;
}