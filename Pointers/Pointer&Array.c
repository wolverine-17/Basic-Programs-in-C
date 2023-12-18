#include <stdio.h>

int main()
{
    // Declare an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Declare a pointer to an integer
    int *ptr;

    // Assign the address of the first element of the array to the pointer
    ptr = numbers;

    // Access and print elements of the array using array syntax and pointer arithmetic
    printf("Array Elements Using Array Syntax:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\nArray Elements Using Pointer Arithmetic:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", *(ptr + i));
    }

    // Modify an array element using pointer
    *(ptr + 2) = 10;

    // Display the modified array
    printf("\n\nModified Array Elements:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
