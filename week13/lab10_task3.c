/*
Program Description: This program does task 2 from Lab 10

Author: Ian Miller

Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    float *ptrAvg;
    float sum = 0.0;
    int nums = 0;
    
    // Part 1
    // How many numbers, i.e., data items do you wish to enter
    printf("\nHow many numbers will you enter?\n");
    scanf("%d", &nums);

    // Part 2
    // Allocate the block of memory required
    ptr = calloc(nums, sizeof(float));

    // Part 3
    // Check if calloc was successful, i.e., check if the memory was allocated successfully
    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    }
    else
    {
        // Part 4
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", nums);

        // Enter data items into the allocated memory block
        for (int i = 0; i < nums; i++)
        {
            scanf("%f", & *(ptr + i));
        }

        printf("\nYou entered:\n");
        for (int i = 0; i < nums; i++)
        {
            printf("%.1f\n", *(ptr + i));
        }
        
        // Calculate the average of the numbers
        for (int i = 0; i < nums; i++) {
            sum += *(ptr + i);
        }
        float average = sum / nums;

        // Display the average
        printf("\nThe average of the numbers stored in the memory block: %.1f\n", average);

        ptrAvg = calloc(1, sizeof(float));

        if (ptrAvg == NULL)
        {
            printf("Memory allocation failed\n");
        }

        ptrAvg = &average;

        printf("Average that is stored in memory is %f", *ptrAvg);

        // Part 5
        // Free the allocated memory block once finishing using it
        free(ptr);
    }
    
    return 0;
}