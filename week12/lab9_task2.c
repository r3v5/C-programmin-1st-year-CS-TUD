/*
Program Description: This program does task 2 from Lab 9

Author: Ian Miller

Date: 05/12/2023
*/

#include <stdio.h>

int main()
{
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    int *ptr3;

    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &char1;

    num1 = 18;
    char1 = 'I';

    // Print the contents and address of num1
    printf("The contents of num1 is %d\n", num1);
    printf("The address of num1 is %p\n", &num1);

    // Print the contents and address of char1
    printf("The contents of char is %c\n", char1);
    printf("The address of num1 is %p\n", &char1);

    // Print the contents of ptr1. (The output should be the same as the addresses of num1 and char1 above)
    printf("The contents of ptr1 is %d\n", *ptr1);
    printf("The address of ptr1 is %p\n", ptr1);

    // Print the contents of ptr2. (The output should be the same as the addresses of num1 and char1 above)
    printf("The contents of ptr2 is %c\n", *ptr2);
    printf("The address of ptr2 is %p\n", ptr2);

    return 0;
}