#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            return false; // Number is divisible by i, not a prime number
        }
    }

    return true; // Number is prime
}

int main()
{
    // Declare variable
    int number;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
