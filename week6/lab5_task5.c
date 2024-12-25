/*
Program Description: This program does task 5 from Lab 5

Author: Ian Miller

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }
        
    }
    

    return 0;
}