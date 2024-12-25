/*
Program Description: This program does task 3 from Lab 17 Semester 2

Author: Ian Miller

Date: 12/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 30

// Structures
struct Person
{
    char first_name[SIZE];
    char surname[SIZE];
    char date_of_birth[SIZE];
    float height;
    float weight;
    char eye_color[SIZE];
    char citizenship[SIZE];
};

// Prototypes
void display(struct Person *person);

int main()
{   
    struct Person person_1, person_2;

    // Enter data for the first person
    printf("Enter data for the first person:\n");
    printf("First Name: ");
    scanf("%s", person_1.first_name);
    printf("Last Name: ");
    scanf("%s", person_1.surname);
    printf("Date of Birth (YYYY-MM-DD): ");
    scanf("%s", person_1.date_of_birth);
    printf("Height (in meters): ");
    scanf("%f", &person_1.height);
    printf("Weight (in kg): ");
    scanf("%f", &person_1.weight);
    printf("Eye Color: ");
    scanf("%s", person_1.eye_color);
    printf("Country of Citizenship: ");
    scanf("%s", person_1.citizenship);

    display(&person_1);

    // Copy data from the first person to the second person
    person_2 = person_1;

    // Modify data for the second person
    strcpy(person_2.first_name, "Conor");
    strcpy(person_2.surname, "McGregor");
    strcpy(person_2.date_of_birth, "1990-01-01");
    person_2.height = 1.80;
    person_2.weight = 75.5;
    strcpy(person_2.eye_color, "Brown");
    strcpy(person_2.citizenship, "Ireland");

    display(&person_2);
        
    return 0;
}

void display(struct Person *person)
{
    printf("\nData entered for the first person:\n");
    printf("First Name: %s\n", person->first_name);
    printf("Last Name: %s\n", person->surname);
    printf("Date of Birth: %s\n", person->date_of_birth);
    printf("Height: %.2f meters\n", person->height);
    printf("Weight: %.2f kg\n", person->weight);
    printf("Eye Color: %s\n", person->eye_color);
    printf("Country of Citizenship: %s\n", person->citizenship);
}
