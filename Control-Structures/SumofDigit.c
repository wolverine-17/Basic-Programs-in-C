#include <stdio.h>

int main()
{
    // Declare variables
    int number, digit, sum = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0)
    {
        digit = number % 10; // Extract the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit
    }

    // Display the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
