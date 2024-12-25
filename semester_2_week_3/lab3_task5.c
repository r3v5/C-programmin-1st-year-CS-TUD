/*
Program Description: This program does task 5 from Lab 3 Semester 2

Author: Ian Miller

Date: 13/02/2024
*/


#include <stdio.h>

#define SIZE 5

// Prototypes
void is_even_or_odd(int *nums);
int count_even_nums(int *nums);


int main()
{
    int values[SIZE];
    int i;

    printf("Enter %d numbers\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", & *(values + i));
    }

    is_even_or_odd(values);

    printf("\nTotal number of event numbers is %d\n", count_even_nums(values));
    
    return 0;
}


void is_even_or_odd(int *nums)
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (*(nums + i) % 2 == 0)
        {
            printf("\n%d is even\n", *(nums + i));
        }
        else if (*(nums + i) % 2 != 0)
        {
            printf("\n%d is odd\n", *(nums + i));
        }
    }
}


int count_even_nums(int *nums)
{
    int i;
    int counter = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (*(nums + i) % 2 == 0)
        {
            counter += 1;
        }
    }

    return counter;   
}