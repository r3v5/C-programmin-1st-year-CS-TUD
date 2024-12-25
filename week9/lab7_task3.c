/*
Program Description: This program does task 3 from Lab 7

Author: Ian Miller

Date: 14/11/2023

*/

#include <stdio.h>
#define SIZE 15

int main()
{
    int arr[SIZE];
    int i;

    printf("\nEnter the values:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("\n%d\n", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d\n", arr[i]);
    }

    //for (i = 0; i < SIZE; i++)
    //{
      //  printf("%d ", arr[i]);
    //}
    
    for (i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}