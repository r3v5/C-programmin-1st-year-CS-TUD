/*
Program Description: This program does task 2 from Lab 18 Semester 2

Author: Ian Miller

Date: 19/03/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 25


// Structures

struct date
{
    int day;
    int month;
    int year;
};

struct Biography
{
    char first_name[SIZE];
    char surname[SIZE];
    struct date DOB;
    float height;
    float weight;
    char eye_color[SIZE];
    char citizenship[SIZE];
};


// Prototypes
void display(struct Biography *person);
void enter(struct Biography *person);


int main()
{
    struct Biography person1, person2;

    enter(&person1);
    display(&person1);

    // Copy data from the first person to the second person
    person2 = person1;

    // Modify data for the second person
    strcpy(person2.first_name, "Conor");
    strcpy(person2.surname, "McGregor");
    person2.DOB.day = 14;
    person2.DOB.month = 7;
    person2.DOB.year = 1988;
    person2.height = 1.80;
    person2.weight = 75.5;
    strcpy(person2.eye_color, "Brown");
    strcpy(person2.citizenship, "Ireland");

    display(&person2);
    

    return 0;
}

void display(struct Biography *person)
{
    int i;

    printf("\nBiography\n");
    printf("First name: %s\n", person->first_name);
    printf("Surname: %s\n", person->surname);
    printf("\nDate of birth: \n");
    printf("\nDay %d", person->DOB.day);
    printf("\nMonth %d", person->DOB.month);
    printf("\nYear %d\n", person->DOB.year);
    printf("Height: %f\n", person->height);
    printf("Weight: %f\n", person->weight);
    printf("Eye color: %s\n", person->eye_color);
    printf("Citizenship: %s\n", person->citizenship);
}


void enter(struct Biography *person)
{   
    printf("\nBiography\n");
    printf("Day of birth: \n");
    scanf("%d", &person->DOB.day);
    printf("Month of birth: \n");
    scanf("%d", &person->DOB.month);
    printf("Year of birth: \n");
    scanf("%d", &person->DOB.year);
    printf("Weight: \n");
    scanf("%f", &person->weight);
    printf("Height: \n");
    scanf("%f", &person->height);
    while(getchar() != '\n');
    printf("Eye color: \n");
    fgets(person->eye_color, SIZE, stdin);
    printf("Citizenship: \n");
    fgets(person->citizenship, SIZE, stdin);
}



