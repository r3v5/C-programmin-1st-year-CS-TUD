/*
Program Description: This program does task 4 Q6 from Lab 3

Author: Ian Miller

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter a temperature in degrees Fahrenheit:\n");
    scanf("%f", &temperature);
    printf("The temperature in degrees = %.0f\n", (temperature - 32.0) * (5.0 / 9.0));

    return 0;
}