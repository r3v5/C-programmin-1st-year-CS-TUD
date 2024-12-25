/*
Program Description: This program does task 4 from Lab 5

Author: Ian Miller

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int i = 10;

    while (i > 0)
    {
        printf("%d\n", i);
        if (i == 3)
        {
            printf("This number is three %d\n", i);
        }
        if (i == 7)
        {
            printf("This number is seven %d\n", i);
        }
        
        i --;
    }
    
    
}