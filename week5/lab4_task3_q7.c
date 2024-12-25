/*
Program Description: This program does task 3 Question 7 from Lab 4

Author: Ian Miller

Date: 17/10/2023

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number from 1 to 7\n");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
        {
            printf("%d is Sunday", num);
            break;
        }
        case 2:
        {
            printf("%d is Monday", num);
            break;
        }
        case 3:
        {
            printf("%d is Tuesday", num);
            break;
        }
        case 4:
        {
            printf("%d is Wednesday", num);
            break;
        }
        case 5:
        {
            printf("%d is Thursday", num);
            break;
        }
        case 6:
        {
            printf("%d is Friday", num);
            break;
        }
        case 7:
        {
            printf("%d is Saturday", num);
            break;
        }
        
        default:
        {
            printf("You entered a number not from 1-7\n");
            break;
        }
    }

    return 0;
}