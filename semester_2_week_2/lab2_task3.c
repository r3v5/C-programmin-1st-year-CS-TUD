/*
Program Description: This program does task 3 from Lab 2 Semester 2

Author: Ian Miller

Date: 06/02/2024
*/


#include <stdio.h>


// Prototypes
int find_highest(int num1, int num2, int num3);


int main()
{   int num1;
    int num2;
    int num3;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int res;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("Enter num1: \n");
    scanf("%d", ptr1);
    printf("Enter num2: \n");
    scanf("%d", ptr2);
    printf("Enter num3: \n");
    scanf("%d", ptr3);

    res = find_highest(*ptr1, *ptr2, *ptr3);

    printf("The highest of %d, %d, %d is %d\n", *ptr1, *ptr2, *ptr3, res);


    return 0;
}


int find_highest(int num1, int num2, int num3)
{
    int highest = num1;

    if (num2 > highest) {
        highest = num2;
    }

    if (num3 > highest) {
        highest = num3;
    }

    return highest;
}