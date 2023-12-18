#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int result = 1;
        for (int i = 2; i <= n; ++i)
        {
            result *= i;
        }
        return result;
    }
}

// Function to calculate nCr
int nCr(int n, int r)
{
    if (r < 0 || r > n)
    {
        return 0; // Invalid input
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    // Declare variables
    int n, r;

    // Get input from the user
    printf("Enter the values of n and r (separated by a space): ");
    scanf("%d %d", &n, &r);

    // Calculate nCr using the function
    int result = nCr(n, r);

    // Display the result
    printf("%dC%d (or %d choose %d) is %d\n", n, r, n, r, result);

    return 0;
}
