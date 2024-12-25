/*
Program Description: This program does task 1 from Lab 3

Author: Ian Miller

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter 3 numbers\n");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    printf("%d %d %d", num1, num2, num3);

    return 0;
}