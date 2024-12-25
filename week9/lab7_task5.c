/*
Program Description: This program does task 5 from Lab 7

Author: Ian Miller

Date: 14/11/2023

*/

#include <stdio.h>
#define ROWS 4
#define COLS 5

int main()
{
    int arr[ROWS][COLS];
    int i;
    int j;
    int zero = 0;

    printf("\nEnter the values in array:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d\n", &arr[i][j]);  
        }
        
    }
    
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("\nRow %d, Col %d contains %d", i, j, arr[i][j]);
        }
        
    }
    

    printf("\nSearch for values that are less than 0\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (arr[i][j] < zero)
            {
                printf("Row %d, Column %d has %d < %d\n", i, j, arr[i][j], zero);
            }
        }
        
    }
    
    
    return 0;
}