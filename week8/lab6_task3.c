/*
Program Description: This program does task 3 from Lab 6

Author: Ian Miller

Date: 07/11/2023

*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int array[SIZE];
    int reverseArray[SIZE];
    int i;
    int reverseIndex = 0;
    
    printf("Enter the 5 elements in array:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The 1st array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", array[i]);
    }
    

    for (i = SIZE - 1; i >= 0; i--)
    {
        reverseArray[reverseIndex] = array[i];
        reverseIndex ++;
        if (reverseIndex == 5)
        {
            break;
        }
    }

    printf("The 2nd array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", reverseArray[i]);
    }

    return 0;
}