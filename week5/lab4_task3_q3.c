/*
Program Description: This program does task 3 Question 3 from Lab 4

Author: Ian Miller

Date: 17/10/2023

*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter two integers\n");
    scanf("%d %d", &num1, &num2);
    printf("%d %d\n", num1, num2);
    if (num1 % num2 == 0)
    {
        printf("%d is evenly divisible by the %d\n", num1, num2);
    }
    else
    {
        printf("%d is not evenly divisible by the %d\n", num1, num2);
    }

    return 0;
}