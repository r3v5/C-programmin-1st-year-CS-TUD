/*
Program Description: This program does task 1 from Lab 6

Author: Ian Miller

Date: 07/11/2023

*/

#include <stdio.h>

#define SIZE 5

int main() {
    int originalArray[SIZE];
    int copiedArray[SIZE];
    
    // Enter 5 integer numbers into the original array
    printf("Enter 5 integer numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &originalArray[i]);
    }
    
    // Copy the contents of the original array into the copied array using a loop
    for (int i = 0; i < SIZE; i++) {
        copiedArray[i] = originalArray[i];
    }
    
    // Print the original and copied arrays
    printf("Original Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");
    
    printf("Copied Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", copiedArray[i]);
    }
    printf("\n");
    
    return 0;
}
