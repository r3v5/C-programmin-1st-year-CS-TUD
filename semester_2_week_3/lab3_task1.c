/*
Program Description: This program does task 1 from Lab 3 Semester 2

Author: Ian Miller

Date: 13/02/2024
*/


#include <stdio.h>
#include <math.h>


#define PI 3.14


// Prototypes
float calculate_area_square(float *side);
float calculate_area_circle(float *radius);


int main()
{   
    float area_square;
    float area_circle;
    float side;
    float radius;
    float *ptr_side;
    float *ptr_radius;

    ptr_side = &side;
    ptr_radius = &radius;

    printf("Eneter the side of square: \n");
    scanf("%f", ptr_side);

    printf("Enter the radius of circle: \n");
    scanf("%f", ptr_radius);

    area_square = calculate_area_square(ptr_side);
    area_circle = calculate_area_circle(ptr_radius);

    printf("The area of square = %.1f\n", area_square);
    printf("The area of circle = %.1f\n", area_circle);
    return 0;
}


float calculate_area_square(float *side)
{
    return pow(*side, 2);
}


float calculate_area_circle(float *radius)
{
    float res;
    res = PI * pow(*radius, 2);
    return res;
}