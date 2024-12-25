/*
Program Description: This program does task 3 Question 6 from Lab 4

Author: Ian Miller

Date: 17/10/2023

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
    {
        printf("%d -> zero\n", num);
        break;
    }
    case 1:
    {
        printf("%d -> one\n", num);
        break;
    }
    case 2:
    {
        printf("%d -> two\n", num);
        break;
    }
    case 3:
    {
        printf("%d -> three\n", num);
        break;
    }
    case 4:
    {
        printf("%d -> four\n", num);
        break;
    }
    case 5:
    {
        printf("%d -> five\n", num);
        break;
    }
    case 6:
    {
        printf("%d -> six\n", num);
        break;
    }
    case 7:
    {
        printf("%d -> seven\n", num);
        break;
    }
    case 8:
    {
        printf("%d -> eight\n", num);
        break;
    }
    case 9:
    {
        printf("%d -> nine\n", num);
        break;
    }
    
    default:
    {
        printf("%d is not a single numeral", num);
        break;
    }
    }

    return 0;
}