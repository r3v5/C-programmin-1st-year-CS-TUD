/*
Program Description: This program does task 4 from Lab 7

Author: Ian Miller

Date: 14/11/2023

*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int res[SIZE];
    int i;

    printf("\nEnter values in arr1:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d\n", &arr1[i]);
    }

    printf("\nEnter values in arr2:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d\n", &arr2[i]);
    }
    
    for (i = 0; i < SIZE; i++)
    {
        res[i] = arr1[i] * arr2[i];        
    }

    printf("\nThe arr1:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe arr2:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\nThe res array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", res[i]);
    }
    
    return 0;
}