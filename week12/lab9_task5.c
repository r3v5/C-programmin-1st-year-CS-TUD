/*
Program Description: This program does task 5 from Lab 9

Author: Ian Miller

Date: 05/12/2023
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    float arr1[SIZE];
    float arr2[SIZE];
    int i;

    printf("Enter values into the 1st array\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", & *(arr1 + i));
    }

    printf("Copying the contents of 1st array into the 2nd array\n");
    for (i = 0; i < SIZE; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }

    printf("The contents of the 1st array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%f ", *(arr1 + i));
    }

    printf("\nThe contents of the 2nd array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%f ", *(arr2 + i));
    }
    
    return 0;
}