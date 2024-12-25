/*
Program Description: This program does task 2 from Lab 6

Author: Ian Miller

Date: 07/11/2023

*/

#include <stdio.h>
#define SIZE 3

int main()
{
    double fahrenheitTemperatures[SIZE];
    double celsiusTemperatures[SIZE];
    int i;

    printf("Enter 3 temperature values:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%lf", &fahrenheitTemperatures[i]);
    }

    printf("Corresponding all temperature values in Celsius:\n");
    for (i = 0; i < SIZE; i++)
    {
        celsiusTemperatures[i] = (fahrenheitTemperatures[i] - 32.0) * (5.0 / 9.0);
        printf("Fahrenheit: %.2lf\tCelsius: %.2lf\n", fahrenheitTemperatures[i], celsiusTemperatures[i]);
    }
    
    return 0;
    
}