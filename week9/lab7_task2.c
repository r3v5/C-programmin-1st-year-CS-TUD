/*
Program Description: This program does task 2 from Lab 7

Author: Ian Miller

Date: 14/11/2023

*/

#include <stdio.h>
#define ROWS 3
#define COLS 2

int main()
{
    int array[ROWS][COLS];
    int i;
    int j;
    int min;
    int max;
    float sum = 0;
    float len = ROWS * COLS;

    printf("\n/Enter values into the array\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
    }

    printf("\n/Display the values in the array\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Row %d, Col %d contains %d\n", i, j, array[i][j]);
        }
        
    }

    min = array[0][0];
    max = array[0][0];

    printf("\n/Find max value\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
            }
            
            
        }
        
    }
    printf("Max value = %d\n", max);

    printf("\n/Find min value\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (min > array[i][j])
            {
                min = array[i][j];
            }
                   
        }
        
    }
    printf("Min value = %d\n", min);

    printf("\n/Calculate the average\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            sum += array[i][j];
        }
        
    }
    printf("Average value = %.1f\n", sum / len);
    
    
    return 0;
}