#include <stdio.h>

int main() {
    int setSize;
    char letters[100]; // Assuming maximum size of the set is 100, you can adjust this if needed
    int vowelCount = 0;
    
    printf("Enter the size of the set of letters: ");
    scanf("%d", &setSize);
    
    printf("Enter the set of letters: ");
    for (int i = 0; i < setSize; i++) {
        scanf(" %c", &letters[i]); // Note the space before %c to consume any leading whitespace
        // Check if the entered letter is a vowel
        if (letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' || letters[i] == 'o' || letters[i] == 'u') {
            vowelCount++;
        }
    }
    
    printf("Number of vowels in the set: %d\n", vowelCount);
    
    return 0;
}
