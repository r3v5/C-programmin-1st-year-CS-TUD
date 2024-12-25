/*
Program Description: This program does task 5 Q8 from Lab 3

Author: Ian Miller

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;

    printf("Enter 3 float numbers:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Sum = %.3f\n", num1 + num2 + num3);
    printf("Average = %.3f\n", (num1 + num2 + num3) / 3);

    return 0;
}