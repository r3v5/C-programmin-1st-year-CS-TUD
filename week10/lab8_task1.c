/*
Program Description: This program does task 1 from Lab 8

Author: Ian Miller

Date: 21/11/2023

*/

#include <stdio.h>
#define ROWS 3
#define COLS 4

int main()
{
    int arr1[ROWS][COLS];
    int arr2[ROWS][COLS];
    int arr3[ROWS][COLS];
    int i;
    int j;

    printf("\nEnter the values for arr1:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter the values for arr2:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nCreating new arr3...\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            int product = arr1[i][j] * arr2[i][j];
            arr3[i][j] = product;
        }
    }

    printf("\nArr3:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("\nRow %d, Col %d contains %d\n", i, j, arr3[i][j]);
        }
        
    }

    return 0;
}