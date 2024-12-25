/*
Program Description: This program does task 6 from Lab 2 Semester 2

Author: Ian Miller

Date: 06/02/2024
*/


#include <stdio.h>

// Function to demonstrate pass by reference
void incrementByTwo(int *num) {
    *num += 2;
    printf("Inside function: %d\n", *num);
}

int main() {
    int num = 1;

    // Print initial value
    printf("Initial value in main(): %d\n", num);

    // Call the function and pass the variable by reference
    incrementByTwo(&num);

    // Print the value after the function call
    printf("Value in main() after function call: %d\n", num);

    return 0;
}
