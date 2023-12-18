#include <stdio.h>

int main()
{
    // Declare variables
    int number, factorial = 1;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0)
    {
        printf("Factorial is undefined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial using a for loop
        for (int i = 1; i <= number; ++i)
        {
            factorial = factorial * i;
        }

        // Display the result
        printf("Factorial of %d: %d\n", number, factorial);
    }

    return 0;
}
