/*
Program Description: This program does task 3 from Lab 3

Author: Ian Miller

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;

    // Input 3 float numbers
    printf("Enter 3 float numbers\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Output 1st correct to 4 decimal places
    printf("You entered %.4 f\n", num1);

    // Output 2nd correct to 3 decimal places
    printf("You entered %.3 f\n", num2);

    // Output 3rd with no decimal places
    printf("You entered %f\n", num3);

    return 0;   
}