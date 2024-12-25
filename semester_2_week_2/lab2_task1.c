/*
Program Description: This program does task 1 from Lab 2 Semester 2

Author: Ian Miller

Date: 06/02/2024
*/


#include <stdio.h>


// Prototypes
int is_even_or_odd(int num);

int main()
{
    int num;
    int res;

    printf("Enter any number: \n");
    scanf("%d", &num);

    res  = is_even_or_odd(num);
    printf("The result is %d\n", res);

    return 0;
}


int is_even_or_odd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else {
        return 0;
    }   
}