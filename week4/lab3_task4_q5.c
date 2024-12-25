/*
Program Description: This program does task 4 Q5 from Lab 3

Author: Ian Miller

Date: 10/10/2023

*/

#include <stdio.h>;

int main()
{
    const int human_heart_rate = 75;
    const int minutes_in_year = 525600;
    int human_age;
    int beats_per_life;
    int human_age_minutes;

    printf("Enter your age\n");
    scanf("%d", &human_age);
    printf("Your age is %d\n", human_age);

    printf("Your age in minutes is %d\n", human_age_minutes * human_age);
    printf("Number of beats yout heart made so far in your life %d\n", (human_age_minutes * human_age) / human_heart_rate);

    return 0;
}