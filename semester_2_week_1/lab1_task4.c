/*
Program Description: This program does task 4 from Lab 11

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>


// Prototypes
float sum(float num1, float num2, float num3);
float average(float sum);


int main()
{
    float num1;
    float num2;
    float num3;
    float res;

    printf("Enter 3 numbers:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    res =  average(sum(num1, num2, num3));

    printf("The sum of %.1f, %.1f, %.1f is %.1f\n", num1, num2, num3, sum(num1, num2, num3));
    printf("The average of %.1f, %.1f, %.1f is %f\n", num1, num2, num3, res);

    return 0;
}


float sum(float num1, float num2, float num3)
{
    float res;
    res = num1 + num2 + num3;
    return res;
}


float average(float sum)
{
    float res;
    res = sum / 3;
    return res; 
}