#include <stdio.h>

int main() {
    int var1;
    int *ptr;
    
    var1 = 1;
    ptr = &var1;

    // Corrected comment: Use %p to print the address
    printf("The address of var1 is %p\n", (void*)&var1);

    // Corrected comment: Use %p to print the address, and &ptr to get the address of the pointer
    printf("ptr contains %p\n", ptr);

    // Corrected comment: Use *ptr to dereference the pointer and get the value it points to
    printf("*ptr contains %d\n", *ptr);

    return 0;
}
