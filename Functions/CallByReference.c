#include <stdio.h>

// Function definition
void incrementByReference(int *x)
{
    (*x)++;
    printf("Inside the function (call by reference): %d\n", *x);
}

int main()
{
    // Declare and initialize a variable
    int num = 5;

    // Call the function with a pointer to the variable
    incrementByReference(&num);

    // Display the value of the variable after the function call
    printf("Outside the function: %d\n", num);

    return 0;
}
