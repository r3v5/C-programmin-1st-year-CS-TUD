/*
Program Description: This program does task 3 from Lab 8

Author: Ian Miller

Date: 21/11/2023

*/

#include <stdio.h>
#define ROWS 3
#define COLS 2

int main()
{
    int arr[ROWS][COLS];
    int i, j;
    int sumRow0, sumRow1, sumRow2;
    int sumCol0, sumCol1;
    int highest;

    printf("\nEnter the values in array:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        int sumRow = 0;

        // Calculate sum of elements in the current row
        for (int j = 0; j < COLS; j++) {
            sumRow += arr[i][j];
        }

        // Display the sum of the current row
        printf("The sum of row %d is %d\n", i, sumRow);
    }
    
    for (int j = 0; j < COLS; j++) {
        int sumColumn = 0;

        // Calculate sum of elements in the current column
        for (int i = 0; i < ROWS; i++) {
            sumColumn += arr[i][j];
        }

        // Display the sum of the current column
        printf("The sum of column %d is %d\n", j, sumColumn);
    }

    printf("\nCalculating the highest number in array...\n");
    highest = arr[0][0];
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (arr[i][j] > highest)
            {
                highest = arr[i][j];
            }
        }
        
    }
    printf("\nThe highest number in array is %d\n", highest);
    
    return 0;
}