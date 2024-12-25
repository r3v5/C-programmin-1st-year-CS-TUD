/*
Program Description: This program does task 1 from Lab 16 Semester 2

Author: Ian Miller

Date: 05/02/2024
*/

#include <stdio.h>
#include <string.h>


#define SIZE 100


// Prototypes
void count_vowels(char s[]);
void reverse_string(char s[]);
void concatenate_strings(char s[]);
int compare_strings(char s1[], char s2[]);
int countWordFrequency(char s[], char word[]);


int main()
{   
    char s[SIZE];
    char compareString[] = "Hello World";
    char word[] = "is";

    printf("Enter the sentense:\n");
    fgets(s, SIZE, stdin);
    count_vowels(s);
    reverse_string(s);
    concatenate_strings(s);

    int result = compare_strings(s, compareString);
    if (result == 0) {
        printf("The input string is the same as 'Hello World'.\n");
    } else {
        printf("The input string is different from 'Hello World'.\n");
    }

    int frequency = countWordFrequency(s, word);
    printf("Frequency of the word 'is' in the input string: %d\n", frequency);
    
    return 0;
}


void count_vowels(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}


void reverse_string(char s[]) {
    int len = strlen(s);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}


void concatenate_strings(char s[])
{
    char sentence[40] = "I entered the string ";
    strcat(sentence, s);
    printf("Concatenated string: %s\n", sentence);
}


int compare_strings(char s1[], char s2[])
{
    return strcmp(s1, s2);
}


int countWordFrequency(char s[], char word[])
{
    int count = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }
    return count;
}