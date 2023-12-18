#include <stdio.h>

int main()
{
    // Declare variable
    int number;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}
