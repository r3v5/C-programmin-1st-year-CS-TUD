/*
Program Description: This program does task 2 from Lab 5

Author: Ian Miller

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int value;
    int steps = 0;

    printf("Enter a positive integer value:\n");
    scanf("%d", &value);

    while (value < 0)
    {
        printf("Error. You must eneter a positive integer number\n");
        scanf("%d", &value);
    }
    
    if (value > 0)
    {
        printf("Value entered is %d\n", value);
        while (value != 1)
        {
            if (value % 2 == 0)
            {
                value = value / 2;
                steps ++;
            }
            else
            {
                value = value * 3 + 1;
                steps ++;
            }
            if (value == 1)
            {
                printf("Final value 1, number of steps %d\n", steps);
            }
            else
            {
                printf("Next value is %d\n", value);
            }
               
        }
        
    }

    return 0;
}