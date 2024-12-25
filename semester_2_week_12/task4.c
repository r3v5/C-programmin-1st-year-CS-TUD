#include <stdio.h>
#include <string.h>

#define STUDENTS 10

// Prototypes
float find_avg_age(int students[STUDENTS]);
int find_youngest_age(int students[STUDENTS]);
int find_oldest_age(int students[STUDENTS]);
void display_students(int students[STUDENTS]);

int main()
{
    int CS_students[STUDENTS];
    int i;
    float avg_age;
    int youngest_age;
    int oldest_age;

    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter the age for student %d: \n", i);
        scanf("%d", & *(CS_students + i));
    }

    avg_age = find_avg_age(CS_students);
    youngest_age = find_youngest_age(CS_students);
    oldest_age = find_oldest_age(CS_students);

    printf("The average age: %f\n", avg_age);
    printf("The youngest age: %d\n", youngest_age);
    printf("The oldest age: %d\n", oldest_age);

    display_students(CS_students);
    
    return 0;
}

float find_avg_age(int students[STUDENTS])
{
    int sum = 0;
    int i;
    float res;
    for (i = 0; i < STUDENTS; i++)
    {
        sum += *(students + i);
    }

    res = sum / STUDENTS;

    return res;
    
}

int find_youngest_age(int students[STUDENTS])
{
    int i, j;

    for (i = 0; i < STUDENTS - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < STUDENTS; j++)
        {
            if (students[j] < students[min])
            {
                min = j;
            }
        }
        int tmp = students[min];
        students[min] = students[i];
        students[i] = tmp;
    }

    return *(students + 0);
    
}

int find_oldest_age(int students[STUDENTS])
{
    int i, j;

    for (i = 0; i < STUDENTS - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < STUDENTS; j++)
        {
            if (students[j] < students[min])
            {
                min = j;
            }
        }
        int tmp = students[min];
        students[min] = students[i];
        students[i] = tmp;
    }

    return *(students + STUDENTS - 1);
}

void display_students(int students[STUDENTS])
{
    int i;
    printf("CS students array: \n");

    for (i = 0; i < STUDENTS; i++)
    {
        printf("%d\n", *(students + i));
    }
}