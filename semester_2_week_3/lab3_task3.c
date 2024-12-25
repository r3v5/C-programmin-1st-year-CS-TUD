/*
Program Description: This program does task 3 from Lab 3 Semester 2

Author: Ian Miller

Date: 13/02/2024
*/


#include <stdio.h>

#define SIZE 5


// Prototypes
int average_of_list(int *nums);


int main()
{
    int numbers[SIZE];
    float average;
    int i;

    // Input 5 numbers from the user and store them in the array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", & *(numbers + i));
    }

    // Calculate the average by calling the function and passing the array
    average = average_of_list(numbers);

    // Display the average
    printf("The average of the 5 numbers is: %.2f\n", average);
    return 0;
}


int average_of_list(int *nums)
{
    int i;
    int sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        sum = sum + *(nums + i);  
    }

    return (float)sum / SIZE;
}