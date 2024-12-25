/*
Program Description: This program does task 2 from Lab 3 Semester 2

Author: Ian Miller

Date: 13/02/2024
*/


#include <stdio.h>

#define SIZE 5

// Prototypes
int highest_num_in_array(int list[]);


int main()
{
    int list[SIZE];
    int i;
    int highest;

    printf("Enter %d numbers\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", & *(list + i));
    }
    
    highest = highest_num_in_array(list);

    // Display the highest of the contents of the array
    printf("\nThe highest number in array is %d\n", highest);

    return 0;
}


int highest_num_in_array(int list[])
{
    int i;
    int max = -1;

    for (i = 0; i < SIZE; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
        }
    }

    return max;
}