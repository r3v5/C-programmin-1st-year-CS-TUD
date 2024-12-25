/*
Program Description: This program does task 3 from Lab 5

Author: Ian Miller

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int i;
    int num;

    printf("Enter a number between 1 - 5\n");
    scanf("%d", &num);

    if (1 <= num && num <= 5)
    {
        for (i = 1; i < 20; i++)
        {
            if (i % num == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("Error. Enter a number between 1 - 5\n");
    }
    
    return 0;
}