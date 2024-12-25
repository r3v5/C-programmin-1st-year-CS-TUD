/*
Program Description: This program does task 4 from Lab 9

Author: Ian Miller

Date: 05/12/2023
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum;
    int *ptr1;
    int *ptr2;
    int *ptr3;

    // Assign pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    printf("Enter the first value:\n");
    scanf("%d", &num1);

    printf("Enter the second value:\n");
    scanf("%d", &num2);

    // finding the sum of two integers
    sum = *ptr1 + *ptr2;

    printf("The sum of num1 and num2 is %d", *ptr3);

    return 0;
}