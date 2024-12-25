/*
Program Description: This program does task 3 from Lab 9

Author: Ian Miller

Date: 05/12/2023
*/

#include <stdio.h>

int main()
{
    float input1;
    float input2;
    float *ptr1;
    float *ptr2;

    printf("Enter the value for input1:\n");
    scanf("%f", &input1);

    printf("Enter the value for input2:\n");
    scanf("%f", &input2);

    // Print the address of input1 and input2 (on separate lines).
    printf("The address of input1 is %p\n", &input1);
    printf("The address of input2 is %p\n", &input2);

    // Print the address of ptr1 and ptr2 (on separate lines) - Remember, even though these are pointers, they are still variables. Therefore, each will also have their own address in memory (RAM)
    printf("The address of ptr1 is %p\n", ptr1);
    printf("The address of ptr2 is %p\n", ptr2);

    // Make ptr1 and ptr2 point to input1 and input2 respectively. Print the contents of ptr1 and ptr2. (The output should be the same as the addresses of input1 and input1 above)
    ptr1 = &input1;
    ptr2 = &input2;
    printf("The contents of ptr1 is %f", *ptr1);
    printf("The address of ptr1 is %p", ptr1);
    printf("The contents of ptr2 is %f", *ptr2);
    printf("The address of ptr2 is %p", ptr2);


    return 0;
}