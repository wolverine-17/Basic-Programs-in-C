#include <stdio.h>

int main()
{
    // Declare variables
    int n;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int numbers[n];

    // Get input from the user for each element
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Bubble sort directly in the main loop
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swap if the element found is greater than the next element
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
