#include <stdio.h>
#include <stdlib.h>

// Prototypes
int count_vowels(char *letters, int size);

int main()
{
    int size = 0;
    char *letters;
    int i;
    char decision = 'n';
    int no_additional_letters = 0;
    int new_block_size = 0;
    int vowels = 0;

    printf("Enter the size of set: \n");
    scanf("%d", &size);

    letters = calloc(size, sizeof(char));

    if (letters == NULL)
    {
        printf("Failed to allocate memory\n");
        return 1;
    }
    else
    {
        printf("\nMemory allocated successfully\n");

        for (i = 0; i < size; i++)
        {
            printf("Enter a letter for position %d:\n", i);
            scanf(" %c", & *(letters + i));
        }

        printf("\nYou entered: \n");

        for (i = 0; i < size; i++)
        {
            printf("%c\n", *(letters + i));
        }

        printf("\nDo you want to extend the set? (y/n)\n");
        scanf(" %c", &decision);

        if (decision == 'n')
        {
            printf("No changes - memory block remains the same");
            vowels = count_vowels(letters, size);
        }
        else
        {
            printf("How many letters do you want to add to your set?\n");
            scanf("%d", &no_additional_letters);

            new_block_size = (size + no_additional_letters) * sizeof(char);

            letters = realloc(letters, new_block_size);

            if (letters == NULL)
            {
                printf("\nFailed to expand memory block for new data\n");
                free(letters);
                return 1;
            }
            else
            {
                printf("\nEnter additional letters\n");
                for (i = size; i < new_block_size; i++)
                {
                    scanf(" %c", & *(letters + i));
                }

                printf("\nYour memory block contains:\n");
                for (i = 0; i < new_block_size; i++)
                {
                    printf("%c %p\n", *(letters + i), (letters + i));
                }

                vowels = count_vowels(letters, new_block_size);
            }
        }

        free(letters);
    }

    printf("\nThe number of vowels in set: %d\n", vowels);

    return 0;
}

int count_vowels(char *letters, int size)
{
    int count = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (*(letters + i) == 'a' || *(letters + i) == 'e' || *(letters + i) == 'i' || *(letters + i) == 'o' || *(letters + i) == 'u')
        {
            count++;
        }
    }

    return count;
}
