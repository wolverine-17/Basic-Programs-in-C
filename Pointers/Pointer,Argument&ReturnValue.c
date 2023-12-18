#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the maximum of two integers using pointers
int *findMax(int *a, int *b)
{
    return (*a > *b) ? a : b;
}

int main()
{
    // Declare two integers
    int num1 = 5, num2 = 8;

    // Display the original values
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to swap the values
    swap(&num1, &num2);

    // Display the swapped values
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    // Call the findMax function to find the maximum value
    int *maxPtr = findMax(&num1, &num2);

    // Display the maximum value
    printf("Maximum value: %d\n", *maxPtr);

    return 0;
}
