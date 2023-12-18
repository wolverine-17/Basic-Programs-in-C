#include <stdio.h>

int main()
{
    // Declare variables
    int num1, num2, num3;

    // Get input from the user
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the greatest number
    if (num1 >= num2 && num1 >= num3)
    {
        printf("The greatest number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The greatest number is: %d\n", num2);
    }
    else
    {
        printf("The greatest number is: %d\n", num3);
    }

    return 0;
}
