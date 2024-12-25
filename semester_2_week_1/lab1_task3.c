/*
Program Description: This program does task 3 from Lab 11

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>


// Prototypes
void task_3(int num1, int num2, int num3);


int main()
{
    task_3(2, 5, 4);
    return 0;
}


void task_3(int num1, int num2, int num3)
{
    int max_num;
    int min_num;

    if (num1 > num2 && num2 > num3)
    {
        max_num = num1;
        min_num = num3;
    }
    else if (num1 > num2 && num2 < num3)
    {
        max_num = num1;
        min_num = num2;
    }
    else if (num2 > num1 && num1 > num3)
    {
        max_num = num2;
        min_num = num3;
    }
    else if (num2 > num1 && num1 < num3)
    {
        max_num = num2;
        min_num = num1;
    }
    else if (num3 > num1 && num1 > num2)
    {
        max_num = num3;
        min_num = num2;
    }
    else if (num3 > num1 && num1 < num2)
    {
        max_num = num3;
        min_num = num1;
    }

    printf("The Highest value is %d\nThe Lowest value is %d\n", max_num, min_num);    
}