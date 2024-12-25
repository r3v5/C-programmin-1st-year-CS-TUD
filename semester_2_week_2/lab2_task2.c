/*
Program Description: This program does task 2 from Lab 2 Semester 2

Author: Ian Miller

Date: 06/02/2024
*/


#include <stdio.h>


// Prototypes
float calculate_average(int num1, int num2, int num3);


int main()
{   
    int i;
    int num1;
    int num2;
    int num3;
    int *ptr1;
    int *ptr2;
    int *ptr3;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("Enter num1: \n");
    scanf("%d", ptr1);
    printf("Enter num2: \n");
    scanf("%d", ptr2);
    printf("Enter num3: \n");
    scanf("%d", ptr3);

    printf("\nThe average of %d, %d, %d is %.2f\n", *ptr1, *ptr2, *ptr3, calculate_average(*ptr1, *ptr2, *ptr3));

    return 0;
}


float calculate_average(int num1, int num2, int num3)
{
    return (num1 + num2 + num3) / 3;
}