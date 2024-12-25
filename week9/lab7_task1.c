/*
Program Description: This program does task 1 from Lab 7

Author: Ian Miller

Date: 14/11/2023

*/

#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int i;

    // Initialize the array
    for (i = 0; i < 10; i++) {
        arr[i] = 9 - i;
    }

    // Display the contents of arr[8] after initialization
    printf("arr[8] after initialization: %d\n", arr[8]);

    // Perform the operation on the array
    for (i = 0; i < 10; i++) {
        arr[i] = arr[arr[i]];
    }

    // Display the contents of arr[8] after the operation
    printf("arr[8] after operation: %d\n", arr[8]);

    return 0;
}