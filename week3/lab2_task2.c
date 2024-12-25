/*
Program Description: This program does task 2 from Lab 2

Author: Ian Miller

Date: 03/10/2023

*/

#include <math.h>
#include <stdio.h>

int main()
{
    float volume;
    float surface_area;
    float area_circle;
    float radius = 4.8;
    const float pi = 3.14;

    // calculate the volume with height 10cm, length 11.5cm, width 2.5cm
    volume = 10 * 11.5 * 2.5;

    // calculate the surface area with height 10cm, length 11.5cm, width 2.5cm
    surface_area = (2 * 11.5 * 2.5) + (2 * 11.5 * 10) + (2 * 10 * 2.5);

    printf("(i)\n");
    printf("The volume with height 10cm, length 11.5cm, width 2.5cm = %f\n", volume);
    printf("The surface area with height 10cm, length 11.5cm, width 2.5cm = %f\n\n", surface_area);

    printf("(ii)\n");

    // Calculate the area of a circle with a radius of 4.8 cm
    area_circle = pi * pow(radius, 2); 

    printf("The area of a circle with a radius of 4.8 cm is %f", area_circle);

    return 0;
}