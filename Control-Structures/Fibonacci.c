#include <stdio.h>

int main()
{
    // Declare variables
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // Get input from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; ++i)
    {
        // Display the current term
        printf("%d, ", firstTerm);

        // Calculate the next term
        nextTerm = firstTerm + secondTerm;

        // Update values for the next iteration
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}
