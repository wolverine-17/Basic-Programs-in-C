#include <stdio.h>

int main()
{
    // Declare variables
    int num1, num2, sum, difference, product;
    float quotient;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0)
    {
        quotient = (float)num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    // Display results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}
