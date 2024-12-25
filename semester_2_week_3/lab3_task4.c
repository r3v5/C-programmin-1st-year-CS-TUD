/*
Program Description: This program does task 4 from Lab 3 Semester 2

Author: Ian Miller

Date: 13/02/2024
*/

#include <stdio.h>

#define SIZE 5

// Prototypes
void multiply_by_2(int list[]); // Changed function name to reflect its new purpose
int highest_num_in_array(int list[]);

int main() {
    int list[SIZE];
    int i;
    int highest;

    printf("Enter %d numbers\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &list[i]);
    }
    
    // Call function to multiply each number in the array by 2
    multiply_by_2(list);

    // Display the contents of the array after modification
    printf("\nThe contents of the array after modification:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    highest = highest_num_in_array(list);

    // Display the highest of the contents of the array
    printf("\nThe highest number in the array is %d\n", highest);

    return 0;
}

// Function to multiply each number in the array by 2
void multiply_by_2(int list[]) {
    int i;
    for (i = 0; i < SIZE; i++) {
        list[i] *= 2;
    }
}

// Function to find the highest number in the array
int highest_num_in_array(int list[]) {
    int i;
    int max = -1;

    for (i = 0; i < SIZE; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }

    return max;
}
