// The DMA implementations

#include <stdio.h>
#include <stdlib.h>

// Prototypes
void dma_malloc();
void dma_calloc();
void dma_realloc();


int main()
{
    //dma_malloc();
    //dma_calloc();
    dma_realloc();

    return 0;
}

void dma_malloc()
{
    int *ptr;
    int numbers = 0;
    int no_bytes = 0;
    int i;

    // Part 1
    // How many numbers to enter
    printf("\nHow many numbers will you enter?\n");
    scanf("%d", &numbers);
    
    // Part calcualate the number of bytes required to store the set of numbers in memory
    no_bytes = numbers * sizeof(int);

    // Part 3
    // Allocate the block of memory required
    ptr = malloc(no_bytes);

    // Part 4
    // Check if malloc was successfull
    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory");
    }
    else
    {
        // Part 5
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);

        // Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        }

        printf("\nYou entered:\n");

        for (i = 0; i < numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        }

        // Part 6
        // Free the allocated memory
        free(ptr);
    }
}


void dma_calloc()
{
    int *ptr;
    int numbers = 0;
    int i;

    // Part 1
    // How many numbers to enter
    printf("\nHow many numbers will you enter?\n");
    scanf("%d", &numbers);
    
    // Part 2
    // Allocate the block of memory required
    ptr = calloc(numbers, sizeof(int));

    // Part 3
    // Check if malloc was successfull
    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory");
    }
    else
    {
        // Part 4
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);

        // Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        }

        printf("\nYou entered:\n");

        for (i = 0; i < numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        }

        // Part 5
        // Free the allocated memory
        free(ptr);
    }
}


void dma_realloc()
{
    int *ptr;
    int numbers = 0;
    int i;

    //Needed for realloc()
    char answer = 'n';
    int extra_data = 0;
    int new_block_size = 0; 

    // Part 1
    // How many numbers to enter
    printf("\nHow many numbers will you enter?\n");
    scanf("%d", &numbers);
    
    // Part 2
    // Allocate the block of memory required
    ptr = calloc(numbers, sizeof(int));

    // Part 3
    // Check if malloc was successfull
    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory");
    }
    else
    {
        // Part 4
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);

        // Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        }

        printf("\nYou entered:\n");

        for (i = 0; i < numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        }

        // Part 5
        // Ask the user to enter additional numbers
        printf("\nEnter more numbers (y/n)\n");
        scanf("%1s", &answer);

        if (answer == 'n')
        {
            printf("No changes - memory block remains the same");
        }
        else
        {
            printf("\nHow many extra numbers to enter?\n");
            scanf("%d", &extra_data);

            // Calculate the total size of the new memory block needed to store the extra data
            new_block_size = (numbers + extra_data) * sizeof(int);
            ptr = realloc(ptr, new_block_size);

            if (ptr == NULL)
            {
                printf("\nFailed to EXPAND memory block foe new data\n");
            }
            else
            {
                printf("\nEnter additional numbers\n");
                for (i = numbers; i < numbers + extra_data; i++)
                {
                    scanf("%d", & *(ptr + i));
                }
                
                printf("\nYour memory block contains:\n");
                // Display the data items entered into the re-allocated memory block
                for (i = 0; i < numbers + extra_data; i++)
                {
                    printf("%d %p\n", *(ptr + i), (ptr + i) );
                }
            }
        }
        

        // Part 6
        // Free the allocated memory
        free(ptr);
    }
}