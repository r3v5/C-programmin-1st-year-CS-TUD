/*
Program Description: This program does task 4 from Lab 6

Author: Ian Miller

Date: 07/11/2023

*/

#include <stdio.h>

int main() {
    int array[4];

    // Allow the user to enter 4 numbers
    for (int i = 0; i < 4; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display the original contents of the array
    printf("Original array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Swap the 1st and 2nd numbers
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;

    // Swap the 3rd and 4th numbers
    temp = array[2];
    array[2] = array[3];
    array[3] = temp;

    // Display the updated array
    printf("Updated array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
