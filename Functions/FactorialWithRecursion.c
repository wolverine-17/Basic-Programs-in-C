#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    // Declare variable
    int n;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial using recursion
    int result = factorial(n);

    // Display the result
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
