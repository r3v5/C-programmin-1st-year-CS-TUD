/*
Program Description: This program does task 2 from Lab 1

Author: Ian Miller

Date: 26/09/2023

*/

#include <stdio.h>

int main()
{   
    /*Program to illustrate errors in a C program */
    int num1; 
    int num2;
    float num3;
    
    num1 = 400;
    num2 = 600;
    num3 = num2;
    
    printf("num1 contains %d\n", num1);
    printf("num2 contains %d and num3 contains %f", num2, num3);
    
    return 0;
}